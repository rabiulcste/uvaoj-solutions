#include <bits//stdc++.h>
using namespace std;

vector<int> adj[50];
int visited[50];
int level[50], n;

int bfs(int s, int e)
{
    for(int i=0; i<n; i++)
    {
        visited[i] = 0;
        // cout<<i;
        level[i] = 0;
    }
    // cout<<endl;
    queue<int>Q;
    Q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        // cout<<u<<endl;
        for(int i=0; i<adj[u].size(); i++){
            if(visited[adj[u][i]]==0){
                int v = adj[u][i];
                // cout<<v<<endl;
                level[v] = level[u]+1;
                visited[v] = 1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    if(level[e]==0) return -1;
    return level[e];
}


int main()
{
    int test;
    scanf("%d", &test);

    cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;

    for(int k=1; k<=test; k++) {
    cout<<"DATA SET  "<<k<<endl<<endl;
            string str, s1, s2;
        int ans, e, q, val, p = 0;
        map<string, int>mp;
        cin>>n>>e>>q;
        for(int i=0; i<n; i++) {
            cin>>str;
            mp[str] = p++;
        }

        while(e--) {
            cin>>s1>>s2;
            adj[mp[s1]].push_back(mp[s2]);
            adj[mp[s2]].push_back(mp[s1]);
        }
        while(q--){
            cin>>val>>s1>>s2;
            ans = bfs(mp[s1], mp[s2]);
            if(ans==-1) cout<<"NO SHIPMENT POSSIBLE"<<endl;
            else cout<<"$"<<(ans*val*100)<<endl;
        }

        for(int i=0; i<50; i++){
            adj[i].clear();
        }
        cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
