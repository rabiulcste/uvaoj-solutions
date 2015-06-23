#include <stdio.h>
#include <math.h>

int main()
{
    int n, m=3, new_bottle, empty_bottle, sum;
    while(scanf("%d", &n)==1){
        sum=n;
        for(; ;){
            new_bottle = n/m;
            empty_bottle = n%m;
            sum+=new_bottle;
            n = new_bottle + empty_bottle;
        if(new_bottle==0)
            break;
        }

        if(n!=0 && n%3!=0 && n%2 == 0)
            sum = sum+1;

        printf("%d\n", sum);
    }
    return 0;
}
