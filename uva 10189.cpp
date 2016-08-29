#include <bits//stdc++.h>
using namespace std;

const int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    int n, m, ka = 0;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int f = 0;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        int a[110][110];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<m+1; j++) a[i][j] = 0;
        }
        string s[100];
        for(int i=0; i<n; i++)  cin >> s[i];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) {
                if(s[i][j] == '*') continue;

                for(int k=0; k<8; k++) {
                    int x = i + dr[k];
                    int y = j + dc[k];
                    //cout << i <<" " << j << endl <<endl;
                    //cout << x << " " << y << endl;
                    if(x >= 0 && x < n && y>=0 && y < m && s[x][y] == '*'){
                        a[i][j]++;
                    }
                }
            }
        }

        if(f) cout <<"\n";
        f = 1;
        cout << "Field #" << ++ka << ":\n";
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(s[i][j] == '*') cout << s[i][j];
                else cout << a[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
