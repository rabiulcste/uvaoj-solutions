#include <stdio.h>

int main()
{
    long long t, caseno=0, a, b, c;
    while(scanf("%lld", &t)==1){
        while(t--){
            scanf("%lld %lld %lld", &a, &b, &c);
            if(a+b<=c || b+c<=a || a+c<=b || a<=0 || b<=0 || c<=0)
                printf("Case %lld: Invalid\n", ++caseno);
            else
            {
                if(a==b && b==c)
                    printf("Case %lld: Equilateral\n", ++caseno);
                else if(a!=b && b!=c && c!=a)
                    printf("Case %lld: Scalene\n", ++caseno);
                else
                    printf("Case %lld: Isosceles\n", ++caseno);
            }
        }
    }
    return 0;
}
