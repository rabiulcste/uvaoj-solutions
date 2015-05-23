#include <stdio.h>

int main()
{
    long long n, t, res, m, d, a, mul, div, s;
    while(scanf("%lld", &t)==1){
            while(t--){
                    scanf("%lld", &n);
        m=n*567;
        d=m/9;
        a=d+7492;
        mul=a*235;
        div=mul/47;
        s=(div-498)/10;
        res=s%10;
        if(res>0)
            printf("%lld\n", res);
        else
            printf("%lld\n", -res);
            }
    }
    return 0;
}
