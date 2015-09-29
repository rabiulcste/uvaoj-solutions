#include <bits//stdc++.h>

using namespace std;

int main()
{
    char c[16][100] = {"Happy", "birthday", "to", "you", "Happy",
                    "birthday", "to", "you", "Happy", "birthday", "to",
                    "Rujia", "Happy", "birthday", "to", "you"};
    char in[100][100];
    int n;
    while(scanf("%d", &n)==1) {
        int p = 1, k = 0;
        for(int i=0; i<n; i++) scanf("%s", in[i]);
        if(n>16)
            p = ceil(n/16) + 1;
        for(int j=0, i=0; j<16*p; j++, i++, k++) {
            if(i==n) i = 0;
            if(j%16==0) k = 0;

            printf("%s: %s\n", in[i], c[k]);
        }
    }
    return 0;
}
