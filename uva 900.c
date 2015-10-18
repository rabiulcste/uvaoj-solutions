#include <stdio.h>

int main()
{
    int fib[100];
    int n, i;
    while(scanf("%d", &n) && n>0){
        fib[0]=1;
        fib[1]=1;
        for(i=2; i<=n; i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        printf("%d\n", fib[n]);
    }
    return 0;
}

