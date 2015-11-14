#include <bits//stdc++.h>

using namespace std;

int main()
{
    int m, n, p, value, category, must;
    while(scanf("%d", &m) && m!=0){
            scanf("%d", &n);
        map<int, int>mp;
        p = 1;
        for(int i = 0; i < m; i++) {
                scanf("%d", &value);
                mp[value] = p++;
        }
        int flag = 1, cnt;
        while(n--){
                cnt = 0;
            scanf("%d %d", &category, &must);
            for(int i=0; i<category; i++){
                scanf("%d", &value);
                if(mp[value]!=0 && mp[value]<=m) {
                        cnt++;
                }
            }
            if(cnt<must) {
                    // cout<<cnt<<endl;
                    flag = 0;
            }
        }
        if(flag == 1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
