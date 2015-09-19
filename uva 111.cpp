#include <bits//stdc++.h>

using namespace std;
#define MX 50
int dp[MX][MX];
int a[MX], b[MX], x, y;
int lcslen(int m , int n){
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
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[x-1] = i;
    }
    while(cin>>y)
    {
        b[y-1] = 0;
        for(int j=1; j<n; j++)
        {
            cin>>y;
            b[y-1] = j;
        }
        lcslen(n, n);
        cout << dp[n][n] <<endl;
    }
    return 0;
}

