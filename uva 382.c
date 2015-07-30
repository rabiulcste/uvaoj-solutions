#include <stdio.h>

int main()
{
    long n, sum, i, temp;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld", &n)==1){
            if(n==0){
                printf("END OF OUTPUT\n");
                break;
            }
            else
            {
            sum=0;
            temp=n;
        for(i=1; i<=n/2; i++){
            if(temp%i==0){
                sum=sum+i;
            }
        }
        if(temp==sum)
            printf("%5ld  PERFECT\n", temp);
        else if(temp<sum)
            printf("%5ld  ABUNDANT\n", temp);
        else if(temp>sum)
            printf("%5ld  DEFICIENT\n", temp);
    }
    }
    return 0;
}
