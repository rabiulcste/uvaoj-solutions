#include <stdio.h>

int main()
{
    long long t, a, b, c;
    while(scanf("%lld", &t)==1){
        while(t--){
            scanf("%lld %lld %lld", &a, &b, &c);
            if(a+b<=c || b+c<=a || c+a<=b)
                printf("Wrong!!\n");
            else
                printf("OK\n");
        }
    }
    return 0;
}
