#include <stdio.h>

int main()
{
    int t, a, b, x, y;
    while(scanf("%d", &t)==1){
        while(t--){
            scanf("%d %d", &x, &y);
            if(y>x)
                printf("impossible\n");
            else if((x+y)%2!=0)
                printf("impossible\n");
            else
            {
                a=(x+y)/2;
                b=(x-y)/2;
                if(a>b)
                printf("%d %d\n", a, b);
                else
                    printf("%d %d\n", b, a);
            }
        }
    }
    return 0;
}
