#include <bits//stdc++.h>
#define ll long long
using namespace std;
int coin[] = {1, 5, 10, 25, 50};
int make;
ll dp[6][30010];

ll call(int i, int amount)
{
    if(i>=5) // All coins have been taken
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
        if(call(0, make) != 1)
            printf("There are %lld ways to produce %d cents change.\n", call(0, make), make);
        else
            printf("There is only 1 way to produce %d cents change.\n", make);
    }
    return 0;
}
