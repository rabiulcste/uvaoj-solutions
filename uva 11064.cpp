#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define ll long long

using namespace std;

ll totient (ll i)
{
	ll res, j;

	if (i == 1) return 1;
    res = i;

    if (i%2 == 0)
    {
		res -= res/2;
		do i/=2; while(i%2 == 0) ;
    }

	for (j = 3; j*j <= i; j += 2)
	{
		if (i%j == 0)
		{
			res -= res/j;
			do i/=j; while (i%j == 0) ;
		}
	}

    // If i>1, then it's the last factor at this point.
	if (i > 1) res-=res/i;

    // Return the result.
	return res;
}



ll divs(ll n) {
	ll res = 1, d = 2;
	
	for (; d*d < n; d++)
		if ((n % d) == 0) res+=2;
	
	if (d*d == n) res++;
	
	return res;
}

int main()
{
    ll n;
    while(cin>>n){
        if (n <= 2)
            cout<<"0"<<endl;
        else
        cout<<n-totient(n)-divs(n)<<endl;
    }
}
