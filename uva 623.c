#include <stdio.h>

int a[10000];

int main()
{
    int n, m, i, j, x, temp;

    while(scanf("%d", &n)==1){
        a[0]=1;
        m=1;
        temp=0;
        for(i=1; i<=n; i++){
            for(j=0; j<m; j++){
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }

            while(temp>0){
                a[m]=temp%10;
                temp=temp/10;
                m++;
            }
        }

        a[m]='\0';

            printf("%d!\n", n);
                for(j=m-1; j>=0; j--){
            printf("%d", a[j]);
        }
        printf("\n");
    }
    return 0;
}
