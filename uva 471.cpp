#include <bits//stdc++.h>
#define N 9876543210
#define ull unsigned long long
using namespace std;

bool verify(ull n)
{
    int mark = 0,t;
    while(n>0)
    {
        t = n%10;
        n/=10;
        if(mark&(1<<t))
            return 0;
        mark|=1<<t;
    }
    return 1;
}
int main()
{
    ull i, n, mx;
    int test;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%llu", &n);
        mx = N/n;
        for(i=1; i<=mx; i++)
            if(verify(i) && verify(n*i))
                printf("%llu / %llu = %llu\n", n*i, i, n);
        if(test)
            putchar('\n');
    }
    return 0;
}
