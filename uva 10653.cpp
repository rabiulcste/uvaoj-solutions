#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
#define mx 1002

using namespace std;

int fx[4] = {1, -1, 0, 0};
int fy[4] = {0, 0, 1, -1};
int mat[mx][mx], dist[mx][mx], color[mx][mx];
int row, col, dr, dc;

void bfs(int sx, int sy)
{
    memset(color, 0, sizeof(color));
    memset(dist, 0, sizeof(dist));

    int ux, uy, vx, vy, flag = 0;

    queue<int>Q;

    Q.push(sx);
    Q.push(sy);

    color[sx][sy] = 1;
    dist[sx][sy] = 0;

    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();
        uy = Q.front();
        Q.pop();

        for(int i = 0; i < 4; i++)
        {
            vx = ux + fx[i];
            vy = uy + fy[i];
            if((vx>=0 && vx<row) && (vy>=0 && vy<col) && mat[vx][vy] != 1) {
                if(!color[vx][vy])
                {
                    color[vx][vy] = 1;
                    dist[vx][vy] = dist[ux][uy] + 1;
                    Q.push(vx);
                    Q.push(vy);
                }
            }
            if(vx == dr && vy == dc)
            {
                printf("%d\n", dist[dr][dc]);
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }
}

int main()
{
    int num, r, c, n, sr, sc;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    while(scanf("%d %d", &row, &col) && row && col){
        scanf("%d", &num);
        memset(mat, 0, sizeof(mat));
        for(int i = 0; i < num; i++){
            scanf("%d %d", &r, &n);
            for(int j = 1; j <= n; j++){
                    scanf("%d", &c);
                    mat[r][c] = 1;
            }
        }
        scanf("%d %d", &sr, &sc);
        scanf("%d %d", &dr, &dc);

        bfs(sr, sc);
    }
    return 0;
}
