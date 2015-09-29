#include <bits//stdc++.h>

using namespace std;

int main()
{
    int t, m, n, x;
    map<int, int>mp;
    map<int, int>::iterator it;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &m, &n);
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &x);
            mp[x]++;
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            mp[x]--;
        }
        int ans = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            ans += abs(it->second);
        }
        cout<<ans<<endl;
        mp.clear();
    }
    return 0;
}
