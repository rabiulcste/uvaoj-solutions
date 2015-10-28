#include <bits//stdc++.h>

using namespace std;

int M, C, price[25][25];
int memo[210][25]; // TOP-DOWN: dp table

int shop(int money, int g) {
    if(money < 0) return -1000000000;
    if(g == C) return M - money;

    // if line below is commented, top-down dp will  become backtracking
    if(memo[money][g]!=-1) return memo[money][g]; // TOP-DOWN memoization
    int ans = -1; // start with a -ve value as all prices are non negative
    for(int model = 1; model<=price[g][0]; model++) // try all models
        ans = max(ans, shop(money-price[g][model], g + 1));
    return memo[money][g] = ans; // TOP-DOWN: memoize answer and return it
}

int main()
{
    int testcases;
    scanf("%d", &testcases);
    while(testcases--) {
        scanf("%d %d", &M, &C);
        for(int i=0; i<C; i++) {
            scanf("%d", &price[i][0]);
            for(int j=1; j<=price[i][0]; j++) scanf("%d", &price[i][j]);
        }

        memset(memo, -1, sizeof memo);
        int result = shop(M, 0);

        if(result < 0) printf("no solution\n");
        else printf("%d\n", result);
    }
    return 0;
}
