#include <bits//stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, c;
    while(scanf("%lld", &n) && n != 0)
    {
        c = 1;
        while(c<n)
        {
            c= c*2 + 1;
        }
        if(c == n) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}
