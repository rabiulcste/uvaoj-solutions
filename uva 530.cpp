#include <bits//stdc++.h>
#define MAX 100
#define i64 long long

using namespace std;


int main()
{
    int n, r;
    i64 ans;
    while(scanf("%d %d", &n, &r), n||r)
    {
        ans = 1;
        if(r > (n / 2)) r = n-r;

        for(int i = 0; i<r; i++){
            ans *= (n - i);
            ans /= (1 + i);
        }
        printf("%lld\n", ans);
    }
    return 0;
}
