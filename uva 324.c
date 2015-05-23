#include <stdio.h>

int a[370];

int main()
{
    int m, n, x, temp, sum, i, j;
    int zero, one, two, three, four, five, six, seven, eight, nine;
    while(scanf("%d", &n) && n>0){
            zero = one = two = three = four = five = six = seven = eight = nine =0;
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
                if(a[j]==0)
                zero++;
            else if(a[j]==1)
                one++;
            else if(a[j]==2)
                two++;
            else if(a[j]==3)
                three++;
            else if(a[j]==4)
                four++;
            else if(a[j]==5)
                five++;
            else if(a[j]==6)
                six++;
            else if(a[j]==7)
                seven++;
            else if(a[j]==8)
                eight++;
            else if(a[j]==9)
                nine++;
        }
    printf("%d! --\n", n);
        printf("(0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n", zero, one, two, three, four);
        printf("(5)    %d    (6)    %d    (7)    %d    (8)    %d    (9)    %d\n", five, six, seven, eight, nine);
    }
    return 0;
}
