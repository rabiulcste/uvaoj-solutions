#include <bits//stdc++.h>
using namespace std;

int main()
{
    int n, val, cnt_reason, cnt_treat, kase = 0;
    while(scanf("%d", &n) && n!=0)
    {
        cnt_reason = cnt_treat = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &val);

            if(val==0) cnt_treat++;
            else cnt_reason++;
        }
        int ans = cnt_reason - cnt_treat;
        printf("Case %d: %d\n", ++kase, ans);
    }
    return 0;
}
