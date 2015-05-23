#include <stdio.h>

int a[10000];
int m, n, x, temp, sum, i, j;

int main()
{

    while(scanf("%d", &n)==1){
        a[0]=1;
        m=1;
        sum=0;
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
        for(j=m-1; j>=0; j--){
            sum+=a[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
