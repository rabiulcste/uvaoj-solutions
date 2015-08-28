#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
#define inf -1

using namespace std;

int main()
{
    int n, e, p, cost, kase = 0;
    string s1, s2;
    while(scanf("%d %d", &n, &e) == 2)
    {
        if(n==0 && e==0)
            return 0;
        map<string, int>mp;
        int dist[203][203];
        p = 1;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++) {
                dist[i][j] = inf;
                if(i==j)
                    dist[i][j] = 0;
            }

        for(int i=1; i<=e; i++)
        {
            cin>>s1>>s2>>cost;
            if(mp[s1] == 0)
                mp[s1] = p++;
            if(mp[s2] == 0)
                mp[s2] = p++;
            dist[mp[s1]][mp[s2]] = cost;
            dist[mp[s2]][mp[s1]] = cost;
        }

        for(int k=1; k<=n; k++)
            for(int i=1; i<=n; i++)
                for(int j=1; j<=n; j++)
                    dist[i][j] = max(dist[i][j], min(dist[i][k], dist[k][j]));
        cin>>s1>>s2;
        printf("Scenario #%d\n%d tons\n\n", ++kase, dist[mp[s1]][mp[s2]]);

    }
    return 0;
}
