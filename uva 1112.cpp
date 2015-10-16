#include <bits//stdc++.h>

using namespace std;
#define INF 999999
#define sz 105
int dist[sz][sz];
int n, edges, ext, times;

int main()
{
    int test;
    cin>>test;
    while(test--) {
        cin >> n >> ext >> times >> edges;
        memset(dist, 63, sizeof dist);
        while(edges--){
            int u, v, w;
            cin>>u>>v>>w;
            dist[u][v] = w;
        }
        for(int k = 1; k <= n; k++)
            for(int i = 1; i <= n; i++)
                for(int j = 1; j <= n; j++)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        int ans = 0;
        for(int i=1; i<=n; i++) {
                // cout<<dist[i][ext]<<endl;
            if(dist[i][ext]<=times || i==ext)
                ans++;
        }
        cout<<ans<<endl;
        if(test) cout<<endl;
    }
    return 0;
}
