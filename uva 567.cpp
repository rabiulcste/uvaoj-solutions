#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

int dist[21];
vector<int>adj[21];

void bfs(int start, int to)
{
    queue<int>Q;
    Q.push(start);
    dist[start] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
            Q.pop();
        if(u == to){
            printf("%2d to %2d: %d\n", start, to, dist[to]);
            break;
        }
        for(int i=0; i<adj[u].size(); i++) {
                int v = adj[u][i];
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                Q.push(v);
            }
        }
    }
    return;
}

int main()
{
    int n, val, ret, start, to, c, kase = 1;
    //freopen("input.txt","r",stdin); //redirects standard input
    //freopen("output.txt","w",stdout); //redirects standard output
    while(1){
    for(int i=1; i<20; i++){
        ret = scanf("%d", &n);
        if(ret == EOF) return 0;
        for(int j=0; j<n; j++)
        {
            scanf("%d", &val);
            adj[i].push_back(val);
            adj[val].push_back(i);
        }
    }

        scanf("%d", &c);
        printf("Test Set #%d\n", kase++);

        for(int i = 0; i < c; i++){
            memset(dist, -1, sizeof(dist));
            scanf("%d %d", &start, &to);
            bfs(start, to);
        }

        for (int i = 0; i < 21; i++)
        {
            adj[i].clear();
        }
        printf("\n");
    }
    return 0;
}
