#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
#define mx 1002

using namespace std;

int fx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int fy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dist[10][10], color[10][10];
int dx, dy;
string s1, s2;
void bfs(int sx, int sy)
{
    memset(color, 0, sizeof(color));
    memset(dist, 0,sizeof(dist));
    int ux, uy, vx, vy;

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

        if(ux == dx && uy == dy)
        {
            cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dist[ux][uy]<<" knight moves.\n";
            break;
        }

        for(int i = 0; i < 8; i++)
        {
            vx = ux + fx[i];
            vy = uy + fy[i];
            //cout<<vx<<endl;
            //cout<<vy<<endl;
            if((vx>=1 && vx<=8) && (vy>=1 && vy<=8) && !color[vx][vy]) {
                color[vx][vy] = 1;
                dist[vx][vy] = dist[ux][uy] + 1;
                Q.push(vx);
                Q.push(vy);
            }

        }
    }
}

int main()
{
    int sx, sy;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    while(cin>>s1>>s2){
        sx = s1[0] - 96;
        sy = s1[1] - '0';
        dx = s2[0] - 96;
        dy = s2[1] - '0';
        bfs(sx, sy);
    }
    return 0;
}
