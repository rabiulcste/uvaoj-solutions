#include <bits//stdc++.h>

using namespace std;

bool check(string a, string b)
{
    if(a.size()>b.size())
        return false;
    int len = a.size();
    for(int i = 0; i < len; i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main()
{
    int kases, n;
    string s[10010];
    scanf("%d", &kases);
    
    while(kases--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++) cin>>s[i];

        sort(s, s+n);

        bool flag = true;

        for(int i = 0; i < n; i++){
            if(check(s[i], s[i+1])){
                flag = false;
                break;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
