#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

#define MAXN 200000+10

// union find array
int pr[MAXN], rank[MAXN];

int findset(int r) {
    if(pr[r] == r) return r; // x is the root
    return findset(pr[r]);
}

// প্রথমে প্রত্যেকটা নোডকে আলাদা আলাদা সেটে রাখবো
void makeset(int n)
{
    for(int i = 0; i < n; i++) {
            pr[i] = i;
            rank[i] = 0;
    }
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

void union_sets(int a, int b)
{
    if(rank[a]<rank[b])
        pr[a] = findset(b);
    else {
        pr[b] = findset(a);
        if(rank[a]==rank[b])
            rank[a]++;
    }
}

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
            union_sets(u, v);
            count++;
            sum += e[i].w;
            if(count==n-1) break;
        }
    }
    return sum;
}
int main()
{
    int n, m, cost;
    // the number of nodes and edges
    while(scanf("%d %d", &n, &m)==2){
        if(m==0 && n==0) break;
        cost = 0;
        e.clear();
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        cost+=w;
        Edge data;
        data.u = u;
        data.v = v;
        data.w = w;
        e.push_back(data);
    }

    int res = krushkal(n);
    cout<<cost-res<<endl;
    }
    return 0;
}


