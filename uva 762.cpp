#include <bits//stdc++.h>
using namespace std;

map<string, string> parent;
map<string, int> visited;

int bfs(string a, string b, map<string, vector<string> > graph) {
    queue<string>q;
    q.push(a);
    visited[a] = 1;
    while(!q.empty()) {
        string u = q.front();
        q.pop();
        if(u == b)
            return visited[u];
        for(int i=0; i<graph[u].size(); i++) {
            string v = graph[u][i];

            if(visited[v] == -1) {
                visited[v] = visited[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
    return -1;
}

void printpath(string a, string b) {
    if(a==b) return;
    printpath(parent[a], b);
    cout<<parent[a]<<" "<<a<<endl;
}

int main()
{
    int n;
    bool blank = false;

    while(scanf("%d", &n) != EOF) {
        map<string, vector<string> > graph;

        string s1, s2, start, end;

        for(int i=0; i<n; i++) {
            cin >> s1 >> s2;
            graph[s1].push_back(s2);
            graph[s2].push_back(s1);

            visited[s1] = -1;
            visited[s2] = -1;
        }
        cin >> start >> end;

        if(blank) printf("\n");
        blank = true;

        int ans = bfs(start, end, graph);
        if(ans == -1)
            cout << "No route" << endl;
        else
            printpath(end, start);
    }
    
    return 0;
}
