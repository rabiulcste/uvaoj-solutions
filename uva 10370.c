#include <stdio.h>

int main()
{
    int a[1000], i;
    float t, n, sum, avg, count;
    while(scanf("%f", &t)==1){
            while(t--){
        scanf("%f", &n);
            sum=0;
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        count=0;
        for(i=0; i<n; i++){
            if(a[i]>avg)
                count++;
        }
        printf("%.3f%%\n", (float)(100*count)/n);
        }
    }
    return 0;
}

