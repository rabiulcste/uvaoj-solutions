#include <bits//stdc++.h>
#define mx 100+10
#define Set(a) memset (a, -1, sizeof (a))

using namespace std;

int fx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int fy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

char mat[mx][mx];
int color[mx][mx];
int row, col, dr, dc;

int bfs(int sx, int sy)
{
    memset(color, 0, sizeof(color));

    int ux, uy, vx, vy, cnt = 1;

    queue<int>Q;

    Q.push(sx);
    Q.push(sy);

    color[sx][sy] = 1;

    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();
        uy = Q.front();
        Q.pop();

        for(int i = 0; i < 8; i++)
        {
            vx = ux + fx[i];
            vy = uy + fy[i];
            if((vx>=0 && vx<row) && (vy>=0 && vy<col) && mat[vx][vy] == 'W') {

                if(!color[vx][vy])
                {
                    // cout<<vx<<" " <<vy<<endl;
                    color[vx][vy] = 1;
                    cnt++;
                    Q.push(vx);
                    Q.push(vy);
                }
            }
        }
    }
    return cnt;
}


int main() {

    int testCase;
    scanf ("%d", &testCase);
    getchar (); getchar ();
    bool blank = false;

    while ( testCase-- ) {
        char inp [120];
        row = col = 0;

        if ( blank ) printf ("\n"); blank = true;

        while ( gets (inp) && strlen (inp) > 0 ) {
            if ( inp [0] == 'L' || inp [0] == 'W' ) {
                strcpy (mat[row], inp);
                col = strlen(inp);
                row++;
            }
            else {
                int r, c;
                sscanf(inp, "%d %d", &r, &c);
                int total = bfs (r - 1, c - 1);
                printf ("%d\n", total);
            }
        }
    }

    return 0;
}
