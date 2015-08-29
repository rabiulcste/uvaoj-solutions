#include <bits//stdc++.h>

using namespace std;

#define inf 100000
int dist[110][110];
int main()
{
    int a, b, n, kase = 0;
    double res;
    while(scanf("%d %d", &a, &b)==2){
            if(a==0 && b==0)
            break;

    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++)
        {
            if(i==j)
                dist[i][j] = 0;
            else
                dist[i][j] = inf;
        }
    n = 0;
    for(;;){
        n = max(max(n,a), b);
            dist[a-1][b-1] = 1;
        scanf("%d %d", &a, &b);
        if(a==0 && b==0)
            break;
    }

    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    int cost = 0;
    int p = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(i!=j && dist[i][j]!=inf)
            {
                cost += dist[i][j]; p++;
            }
        }
    }
        res = (double)cost/p;

        printf("Case %d: average length between pages = %.3lf clicks\n", ++kase, res);
    }
    return 0;
}
