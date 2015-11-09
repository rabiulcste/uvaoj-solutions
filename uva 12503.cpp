#include <bits//stdc++.h>

using namespace std;

int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n)==2) {
        if(m == -1 && n == -1) break;
        else if(m == n) printf("0\n");
        else {
            int res1 = abs(m-n);
            int res2 = (m-0) + (100-n);
            int res3 = (n-0) + (100-m);

            int res = min(res1, min(res2, res3));
            cout<<res<<endl;
        }
    }
    return 0;
}
