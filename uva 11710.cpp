#include <bits//stdc++.h>

using namespace std;

#define MAXN 410

// union find array
int pr[MAXN];

int findset(int r) {
    if(pr[r] == r) return r; // x is the root
    return findset(pr[r]);
}

// a structure to represent an edge
struct Edge {
    // the two endpoints and the weight
    int u, v, w;
    // a comparator that stores by least wight
    bool operator<(const Edge &p) const
    {
        return w < p.w;
    }
};

vector<Edge> e;


int main()
{
    int n, m;
    // the number of nodes and edges
    while(scanf("%d %d", &n, &m)==2) {
            if(n==0 && m==0) break;
    string str, s1, s2;
    map<string, int>mp;
    int k = 1;
    for(int i = 0; i < n; i++)
    {
        cin>>str;
        mp[str] = k++;
    }

    e.clear();
    for(int i = 0; i < m; i++) {
        int w;
        cin>>s1>>s2>>w;
        Edge data;
        data.u = mp[s1];
        data.v= mp[s2];
        data.w = w;
        e.push_back(data);
    }
        
    cin>>str;

    for(int i = 1; i <= n; i++) pr[i] = i;

    sort(e.begin(), e.end());

    int cot = n-1, sum = 0;
    for(int i = 0; i < (int)e.size(); i++) {
        int u = findset(e[i].u);
        int v = findset(e[i].v);
        if(u!=v)
        {
            pr[u] = v;
            cot--;
            // cout<<cot<<endl;
            sum += e[i].w;
        }
    }
    
    if(cot) cout << "Impossible" << endl;
    else cout << sum << endl;
    }
    
    return 0;
}
