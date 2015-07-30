#include <stdio.h>

int main()
{
    long cases, caseno=0, n, i, num, max;
    while(scanf("%ld", &cases)==1){
    while(cases--){
        scanf("%d", &n);
        max=0;
        for(i=0; i<n; i++){
            scanf("%d", &num);
            if(num>max)
                max=num;
            }
            printf("Case %ld: %ld\n", ++caseno, max);
        }
    }
    return 0;
}
