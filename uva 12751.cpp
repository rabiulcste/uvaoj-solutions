#include <bits//stdc++.h>
using namespace std;

int main()
{
    int t, n, k, x, kase = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &n, &k, &x);
        int cal = n*(n+1)/2;
        int ans = 0;
        while(k--)
        {
            ans+=x;
            x++;
        }
        printf("Case %d: %d\n", ++kase, cal-ans);
    }
    return 0;
}
