#include <stdio.h>

int main()
{
    int t, i, n, a[100], high, low, caseno=0;
    while(scanf("%d", &t)==1){
        while(t--){
                high=0;
                low=0;
            scanf("%d", &n);
            for(i=0; i<n; i++){
                scanf("%d", &a[i]);
            }
            for(i=0; i<n-1; i++){
                if(a[i]>a[i+1])
                    low++;
                else if(a[i]<a[i+1])
                    high++;
            }
            printf("Case %d: %d %d\n", ++caseno, high, low);
        }
    }
    return 0;
}
