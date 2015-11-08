#include <bits//stdc++.h>

using namespace std;

int main()
{
    int B[30];
    int m, n, debtor, creditor, value;
    while(scanf("%d %d", &m, &n) == 2) {
            if(m == 0 && n == 0) break;
        for(int i = 1; i <= m; i++) scanf("%d", &B[i]);

        for(int i = 1; i <= n; i++)
        {
            scanf("%d %d %d", &debtor, &creditor, &value);
            B[debtor] -= value;
            B[creditor] += value;
        }
        bool flag = true;
        for(int i = 1; i <= m; i++)
            if(B[i]<0) flag = false;
        if(flag) printf("S\n");
        else printf("N\n");
    }
    return 0;
}
