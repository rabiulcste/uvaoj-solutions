#include <bits//stdc++.h>

using namespace std;

int sumDigits(int n)
{
    int s = 0;
    while(n > 0){
        s += n%10;
        n /= 10;
    }
    return s;
}

int primesum(int n)
{
    int ans = 0;
    while(n%2 == 0)
    {
        ans += 2;
        n /= 2;
    }

    for(int i = 3; i <= sqrt(n); i += 2)
    {
        while(n%i == 0)
        {
            ans += sumDigits(i);
            n /= i;
        }
    }
    if(n > 2)
        ans += sumDigits(n);
    return ans;
}

bool is_prime(int n) {
        bool prime = true;
        for (int i=3; i<=sqrt(n); i+=2) {
                if ((n % i) == 0) {
                        prime = false;
                        break;
                }
        }
        if ((n%2 !=0 && prime && n > 2) || n == 2) {
                return true;
        } else {
                return false;
        }

}
int main()
{
    int t, n, k, res;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);

        for(k = n + 1; ; k++)
        {
            if(primesum(k) == sumDigits(k) && !is_prime(k))
            {
                printf("%d\n", k);
                break;
            }
        }
    }
    return 0;
}
