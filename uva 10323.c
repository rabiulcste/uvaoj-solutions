#include <stdio.h>

long long fact(long long x)
{
    if(x==0)
        return 1;
    else
        return (x*fact(x-1));
}

int main()
{
    long long n, result;
    while(scanf("%lld", &n)==1)
    {
        if(n<0 && n%2==0)
            printf("Underflow!\n");
        else if(n<0 && n%2!=0)
            printf("Overflow!\n");
        else if(n==0 || n<=7)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");
        else if(n>=8 && n<=13)
        {
        result=fact(n);
            printf("%lld\n", result);
        }
    }
return 0;
}
