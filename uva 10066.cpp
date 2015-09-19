#include <bits//stdc++.h>

using namespace std;
#define MX 110
int dp[MX][MX];
int a[MX], b[MX];

int LCSLength(int m , int n){
	int i, j;

	for (i = 0; i <= m; ++i)
		dp[i][0] = 0;

	for (j = 0; j <= n; ++j)
		dp[0][j] = 0;

	for (i = 1; i <= m; ++i){
		for (j = 1; j <= n; ++j){
			if (a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else if (dp[i-1][j] >= dp[i][j-1]){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = dp[i][j-1];
			}
		}
	}
	return dp[m][n];
}

int main()
{
    int m, n, kases = 0;
    while(scanf("%d %d", &m, &n)==2)
    {
        if(m==0 && n==0) break;

        for(int i = 0; i < m; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n; i++) scanf("%d", &b[i]);
        LCSLength(m, n);
        printf("Twin Towers #%d\n", ++kases);
        printf("Number of Tiles : %d\n\n", dp[m][n]);
    }
}

