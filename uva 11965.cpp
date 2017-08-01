#include <bits//stdc++.h>
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int T, ks = 0;
    scanf("%d", &T);
    while(T--) {
        printf("Case %d:\n", ++ks);
        int n;
        scanf("%d", &n);
        getchar();
        for(int i = 0; i < n; i++) {
            char str[510];
            gets(str);
            int sp = 0;
            for(int i = 0; str[i]; i++) {
                if(str[i] == ' ') sp = 1;
                else if(str[i] != ' ') {
                    if(sp) {
                        printf(" ");
                        sp = 0;
                    }
                    printf("%c", str[i]);
                }
            }
            if(sp) printf(" ");
            printf("\n");
        }
        if(T) printf("\n");
    }
}
