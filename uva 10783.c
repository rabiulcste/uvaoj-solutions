#include <stdio.h>

int main()
{
    int a, b, t, i, sum;
    while(scanf("%d", &t) == 1){
            while(t--){
                    scanf("%d %d", &a, &b);
            sum = 0;
        for(i=a; i<=b; i++){
            if(i%2!=0)
                sum+=i;
        }
    printf("%d\n", sum);
    }
    }
    return 0;
}
