#include <stdio.h>

int main()
{
    long long num, sum, rem;

    while(scanf("%lld", &num) && num!=0){
        for(; ;){
                 sum=0;
                while(num!=0){
            rem=num%10;
            sum+=rem;
            num=num/10;
            }
            num = sum;
                if(sum<10){
                break;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
