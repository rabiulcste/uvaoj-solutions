#include <stdio.h>

int main()
{
    long long a, b, result;
    while(scanf("%lld %lld", &a, &b)==2){
        if(a>b)
        result=a-b;
    else
        result=b-a;
        printf("%lld\n", result);
    }
    return 0;
}
