#include <stdio.h>

int main()
{
    int count, value, n, i, caseno=0;
    while(scanf("%d", &n) && n>0){
        count=0;
        value=1;
        if(n==1)
            printf("Case %d: 0\n", ++caseno);
        else
            {
                for(i=0; value<n; i++){
                    value+=value;
                count++;
                }
                printf("Case %d: %d\n", ++caseno, count);
            }
    }
    return 0;
}
