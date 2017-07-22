#include <bits//stdc++.h>

using namespace std;

int main()
{
    int t, n, x, res1, res2, kase = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        res1 = res2 = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &x);
            res1 += ((x/30)+1)*10;
            res2 += ((x/60)+1)*15;
        }
        if(res1==res2)
            printf("Case %d: Mile Juice %d\n", ++kase, res1);
        else if(res1<res2)
            printf("Case %d: Mile %d\n", ++kase, res1);
        else
            printf("Case %d: Juice %d\n", ++kase, res2);

    }
    return 0;
}
