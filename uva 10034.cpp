#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;
#define MAXN 100000

int pr[MAXN];

int findset(int r)
{
    if(pr[r]==r) return r;

    return findset(pr[r]);
}

void makeset(int n)
{
    for(int i=0; i<n; i++)
        pr[i] = i;
}

struct Edge
{
    int u, v;
    double w;
    bool operator < (const Edge &p) const
    {
        return w < p.w;
    }
};

vector<Edge> e;
double dist[100][2];
double krushkal(int n)
{
    double sum = 0;
    sort(e.begin(), e.end());
    makeset(n);
    for(int i=0; i<(int)e.size(); i++)
    {
        int u = findset(e[i].u);
        int v = findset(e[i].v);

        if(u!=v)
        {
            pr[u] = v;
            sum += e[i].w;
        }
    }
    return sum;
}

int main()
{
    int kase, n, k;
    while(scanf("%d", &kase)==1)
    {
        while(kase--)
        {
            cin>>n;
            for(int i=0; i<n; i++)
            {
                scanf("%lf %lf", &dist[i][0], &dist[i][1]);
            }
        e.clear();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
            {
                Edge data;
                data.u = i;
                data.v = j;
                data.w = sqrt(pow(dist[i][0]-dist[j][0], 2) + pow(dist[i][1]-dist[j][1], 2));
                e.push_back(data);
            }

        printf("%.2lf\n", krushkal(n));
        if(kase) printf("\n");
        }
    }
}

