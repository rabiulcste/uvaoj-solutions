#include <stdio.h>
#include <math.h>

double a[10000001];

int main()
{
    int n, i, t;
            a[1]=1;
        for(i=2; i<=10000001; i++){
            a[i]=a[i-1]+log10(i);
        }
    while(scanf("%d", &t)==1){
     while(t--){
        scanf("%d", &n);
        printf("%d\n", (int)a[n]);
     }
    }
    return 0;
}
