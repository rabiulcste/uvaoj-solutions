#include <stdio.h>

int gcd(int a, int b)
{
    return b==0?a:gcd(b, a%b);
}
int main()
{
    int a, b, c, target, i, flag, t;
    while(scanf("%d", &t)==1){
        while(t--){
            scanf("%d %d", &a, &c);
            flag=0;
            if(c%a==0){
                target=c/a;
                for(i=target; i<=c; i+=target){
                    if(i/gcd(i, a)==target){
                        flag=1;
                    b=i;
                    break;
                    }
                }
            }
            if(flag==1)
                printf("%d\n", b);
            else
                printf("NO SOLUTION\n");
        }
    }
    return 0;
}
