#include <bits//stdc++.h>
using namespace std;

const int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    int t;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << (a/3)*(b/3)<<endl;
    }
    return 0;
}
