#include <bits//stdc++.h>
using namespace std;

int main()
{
    int T, ks = 0;
    scanf("%d", &T);
    while(T--) {
        int n;
        cin >> n;
        printf("Case %d:", ++ks);
        for(int i = sqrt(n)-1; i >= 1; i--) {
            int x = n - i*i;
            if(x%i == 0) {
                printf(" %d", x);
            }
        }
        printf("\n");
    }
    return 0;
}
