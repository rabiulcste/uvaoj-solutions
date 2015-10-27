#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

#define MAXN 100001

// union find array
int pr[MAXN];

int findset(int r) {
    if(pr[r] == r) return r; // x is the root
    return findset(pr[r]);
}

void makeset(int n)
{
    for(int i = 0; i <= n; i++) pr[i] = i;
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
    int test, k=0, n, m, a, cost, air;
    // the number of nodes and edges
        scanf("%d", &test);
        while(test--){
        cin>>n>>m>>a;
        e.clear();

        for(int i = 0; i < m; i++) {
            int u, v, w;
            cin>>u>>v>>w;
            Edge data;
            data.u = u;
            data.v = v;
            data.w = w;
            if(w < a)
            e.push_back(data);
        }

        cost = 0;
        
        // sort the edges
        sort(e.begin(), e.end());

        makeset(n); // create set

        int count = 0;
        for(int i = 0; i < (int)e.size(); i++){
            int u = findset(e[i].u);
            int v = findset(e[i].v);
            if(u!=v)
            {
                pr[u] = v;
                count++;
                cost += e[i].w;
                if(count==n-1) break;
            }
        }

        air = n - count;
        cost+=a*air;
            printf("Case #%d: %d %d\n", ++k, cost, air);
    }
    return 0;
}
