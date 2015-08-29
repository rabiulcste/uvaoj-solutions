#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#define pi acos(-1)
using namespace std;

#define MAXE 10001
#define MAXN 1001

int main()
{
    int node, edge, kase;
    cin>>kase;
    while(kase--){
    int d[MAXN], edge_u[MAXE], edge_v[MAXE], edge_cost[MAXE];
    cin>>node>>edge;

    for(int i = 1; i < node; i++) d[i] = 99999;
        d[0] = 0; // distance to source is 0
    for(int i = 0; i < edge; i++)
    {
        cin>>edge_u[i]>>edge_v[i]>>edge_cost[i];
    }
    bool neg_cycle = false;
    for(int step = 0; step < node-1; step++)
    {
        for(int i = 0; i < edge; i++)
        {
            int u = edge_u[i], v = edge_v[i], w = edge_cost[i];
            if(d[u] + edge_cost[i] < d[v])
            {
              d[v] = d[u] + edge_cost[i];
            }
        }
    }

        for(int i = 0; i < edge; i++ ) {
            int u = edge_u[i], v = edge_v[i], w = edge_cost[i];
            if(d[u] + edge_cost[i] < d[v])
            {
               neg_cycle = true;
            }
        }

    if(neg_cycle)
    {
        cout<<"possible\n";
    }
    else
        cout<<"not possible\n";
    }
    return 0;
}
