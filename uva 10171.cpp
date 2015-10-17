#include <bits//stdc++.h>
#define pb push_back
#define SET(a, v) memset(a, v, sizeof a)
#define EPS 1e-10
#define pi 3.1415926535897932384626433832795
#define mx 1000
#define INF 100000000
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;

int main()
{
    int n;
    char road, dir, u, v; 
    int cost;
    while(cin>>n){
        if(n==0) break;

        int dY[26][26];
        int dM[26][26];

        for(int i=0; i<26; i++) {
            for(int j=0; j<26; j++) {
                dY[i][j]=dM[i][j] = INF;
            }
        }

        for(int i=0 ;i<n; i++) {
            cin>>road>>dir>>u>>v>>cost;
            int x = u-'A', y = v-'A';

            if(road=='Y') {
                if(dir=='U') dY[x][y] = cost;
                else dY[x][y] = dY[y][x] = cost;
            }
            else
            {
                if(dir=='U') dM[x][y] = cost;
                else dM[x][y] = dM[y][x] = cost;
            }
        }

        for(int i=0; i<26; i++) {
                dY[i][i] = dM[i][i] = 0;
        }

        for(int k=0; k<26; k++)
            for(int i=0; i<26; i++)
                for(int j=0; j<26; j++) {
                    dM[i][j] = min(dM[i][j], dM[i][k]+dM[k][j]);
                    dY[i][j] = min(dY[i][j], dY[i][k]+dY[k][j]);
                }
        cin>>u>>v;
        int SY = u-'A', SM = v-'A';
        int ans = INF;
        for(int i=0; i<26; i++) {
            if(dY[SY][i]==INF || dM[SM][i]==INF) continue;
            if(dY[SY][i]+dM[SM][i] < ans)
                ans = dY[SY][i]+dM[SM][i];
        }

        if(ans == INF) puts("You will never meet.");
        else{
            printf("%d", ans);
            for(int i=0; i<26; i++){
                if(dY[SY][i]+dM[SM][i]==ans)
                    printf(" %c", i+'A');
            }
            puts("");
        }
    }
    return 0;
}
