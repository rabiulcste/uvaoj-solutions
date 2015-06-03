#include <stdio.h>

int main()
{
    int n, sum, res, i, count, caseno=0;;
    int a[102];
    while(scanf("%d", &n) && n!=0){

            sum = count = 0;

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
            sum += a[i];
        }
            res=sum/n;

            for(i=0; i<n; i++){
                if(a[i]>res)
                    count=count+(a[i]-res);
            }

            printf("Set #%d\nThe minimum number of moves is %d.\n\n",++caseno, count);
    }
    return 0;
}
