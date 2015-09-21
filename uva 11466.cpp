#include <bits//stdc++.h>
#define ll long long
using namespace std;

void primeFactors(ll n)
{
    ll large = 0, cot = 0, res;
    int flag = 0;
    // if number is a even number, then prll 2
    while(n%2 == 0)
    {
        res = 2;
        if(flag ==0 ) cot++;
        flag = 1;
        large = max(large, res);
        n /= 2;
    }

    // n must be odd at this poll.
    for(ll i = 3; i <= sqrt(n); i += 2)
    {
        flag = 0;
        // while i divides n, prll i and divide n
        while(n%i == 0)
        {
            res = i;
            large = max(res, large);
            if(flag==0) cot++;
            flag = 1;
            n /= i;
        }
    }

    // when n is a prime number and greater than 2
    if(n > 2)
        {
            res = n;
            large = max(large, res);
            cot++;
        }
    if(cot<=1) cout<<"-1"<<endl;
    else
        cout<<large<<endl;
    return;
}

int main()
{
    ll n;
    while(scanf("%lld", &n) && n!=0)
    {
       if(n < 0) n = -n;
        primeFactors(n);
    }
    return 0;
}
