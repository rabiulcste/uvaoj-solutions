#include <stdio.h>

int main()
{
    long long n, k, sum;
    while(scanf("%lld %lld", &n, &k)==2){
            sum=n+(n-1)/(k-1);
        printf("%lld\n", sum);
    }
    
    return 0;
}
