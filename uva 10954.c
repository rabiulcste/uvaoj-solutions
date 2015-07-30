#include <stdio.h>

int main()
{
    long n, i, cost, total=0, value[500];
    while(scanf("%ld", &n) && n>0){
        scanf("%ld", &value[0]);
        cost=value[0];
        for(i=1; i<n; i++){
                scanf("%ld", &value[i]);
            cost+=value[i];
            total+=cost;
        }
    printf("%ld\n", total);
    }
    return 0;
}
