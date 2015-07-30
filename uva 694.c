#include <stdio.h>

int main()
{
    long long a, l, temp, count, caseno=0;
    while(scanf("%lld %lld", &a, &l)==2){
            temp=a;
        if(a<0 && l<0)
            break;
            count=0;
        while(a>1){
            if(a%2==0)
                a=a/2;
            else
                a=a*3+1;
            count++;
            if(a>l)
                break;
        }
        if(a==1)
            count++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", ++caseno, temp, l, count);
    }
    return 0;
}
