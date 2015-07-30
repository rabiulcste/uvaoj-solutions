#include <stdio.h>

int main()
{
    long long n, i, m[1000], f[1000];
    while(scanf("%lld", &n) && n!=-1){
        m[0]=0; f[0]=1;
        m[1]=f[1]=1;
        m[2]=f[2]=2;
        for(i=3; i<=n; i++){
            m[i]=m[i-1]+m[i-2]+1;
            f[i]=f[i-1]+f[i-2];
        }
        printf("%lld %lld\n",m[n], m[n]+f[n]);
    }
    return 0;
}
