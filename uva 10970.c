#include <stdio.h>

int main()
{
    int a, b, sum;
    while(scanf("%d %d", &a, &b)==2){
        sum=(a*b)-1;
        printf("%d\n", sum);
    }
    return 0;
}
