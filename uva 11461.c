#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b, i, count;
    while(scanf("%lld %lld", &a, &b) && a>0 && b>0){
            count=0;
        for(i=a; i<=b; i++){
            if(ceil(sqrt(i))==floor(sqrt(i))){
                count++;
            }
        }
    printf("%lld\n", count);
    }
    
    return 0;
}
