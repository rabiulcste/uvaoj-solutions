#include <stdio.h>

int main()
{
    long long n, sum;
    while(scanf("%llu", &n) && n>0){
            sum=((n*(n+1))/2)+1;
                printf("%llu\n",sum);
    }
    return 0;
}

