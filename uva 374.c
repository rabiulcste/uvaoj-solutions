#include <stdio.h>

#define ll long long

ll bigmod(ll b, ll p, ll m)
{
    ll ret;
    if(p==0)
        return 1;
    if(p%2==0){
        ret=bigmod(b, p/2, m);

        return ((ret%m)*(ret%m)%m);
    }

    else
        return ((b%m)*(bigmod(b, p-1, m)%m)%m);
}

int main()
{
    ll b, p, m;
    while(scanf("%lld %lld %lld", &b, &p, &m)==3){
     printf("%lld\n", bigmod(b, p, m));
    }
    return 0;
}
