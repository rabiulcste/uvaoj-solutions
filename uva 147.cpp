#include <bits//stdc++.h>
#define ll long long
using namespace std;
int coin[] = {2000, 1000, 400, 200, 100 , 40, 20, 10, 4, 2 ,1};
double make;
ll dp[12][7500];

ll call(int i, int amount)
{
    if(i>=11) // All coins have been taken
    {
        if(amount == 0) return 1;
        else return 0;
    }

    if(dp[i][amount] != -1) return dp[i][amount];

    ll ret1 = 0, ret2 = 0;

    if(amount - coin[i]>=0) ret1 = call(i, amount - coin[i]); // try to take i
    ret2 = call(i+1, amount); // don't take coin i
    // return dp[i][amount] = ret1 | ret2; // is possible or not?
    return dp[i][amount] = ret1 + ret2; // total possible way
}

int main()
{
    memset(dp, -1, sizeof(dp));
    while(cin>>make)
    {
        if(make*20 == 0) break;
        printf("%6.2lf%17lld\n", make, call(0, make*20));
    }
    return 0;
}
