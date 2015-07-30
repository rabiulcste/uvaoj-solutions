#include <stdio.h>

int main()
{
    int m, n, o, p, t, i, j, sum, temp, result, caseno=0;
    int a[100];
    while(scanf("%d", &t)==1){
            while(t--){
        scanf("%d %d %d %d", &m, &n, &o, &p);
        for(i=0; i<3;i++)
        {
            scanf("%d",&a[i]);
            for(j=0; j<=i; j++)
            {
                if(a[j]>a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        sum=(a[1]+a[2])/2;
        result=m+n+o+p+sum;

        if(result>=90)
            printf("Case %d: A\n", ++caseno);
        else if(result>=80 && result!=90)
            printf("Case %d: B\n", ++caseno);
        else if(result>=70 && result!=80)
            printf("Case %d: C\n", ++caseno);
        else if(result>=60 && result!=70)
            printf("Case %d: D\n", ++caseno);
        else if(result<60)
            printf("Case %d: F\n", ++caseno);
        }
    }
    return 0;
}
