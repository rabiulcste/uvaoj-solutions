#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
#define MAXN 1000003

// union find array
int pr[MAXN];

int findset(int r) {
    if(pr[r] == r) return r; // x is the root
    return findset(pr[r]);
}

void makeset(int n)
{
    for(int i = 0; i < n; i++) pr[i] = i;
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

int krushkal(int n)
{
    // sort the edges
    sort(e.begin(), e.end());

    makeset(n); // create set

    int count = 0, sum = 0;
    for(int i = 0; i < (int)e.size(); i++){
        int u = findset(e[i].u);
        int v = findset(e[i].v);
        if(u!=v)
        {
            pr[u] = v;
            count++;
            sum += e[i].w;
            if(count==n-1) break;
        }
    }
    return sum;
}
int main()
{
    int n, k, m;
    bool flag=true;
    // the number of nodes and edges
    while(scanf("%d", &n)==1){
    int initcost = 0;
    e.clear();
    for(int i = 0; i < n-1; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        initcost += w;
    }
    cin>>k;
    for(int i = 0; i < k; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        Edge data;
        data.u = u;
        data.v = v;
        data.w = w;
        e.push_back(data);
    }
    cin>>m;
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        Edge data;
        data.u = u;
        data.v = v;
        data.w = w;
        e.push_back(data);
    }
    n = k + m;
    int res = krushkal(n);
    if(!flag) printf("\n");
    flag = false;
    cout<<initcost<<endl;
    cout<<res<<endl;
    }
    return 0;
}
