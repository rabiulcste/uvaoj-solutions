#include <stdio.h>

int main()
{
    long long t, n, i, size, animal, friendly, final_premium, total;

    while(scanf("%lld", &t)==1){
        while(t--){
            scanf("%lld", &n);
            total=0;
            for(i=0; i<n; i++){
                scanf("%lld %lld %lld", &size, &animal, &friendly);
                final_premium=size*friendly;
                total+=final_premium;
            }
            printf("%lld\n", total);
        }
    }
    return 0;
}
