 #include <bits//stdc++.h>

using namespace std;

int main()
{
    int kases;
    bool blank = false;
    scanf("%d", &kases);
    while(kases--){
            if(blank) cout<<endl;
            blank = true;
        int n, l[10000], h[10000];
        string s[10000];
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            cin>>s[i];
            scanf("%d %d", &l[i], &h[i]);
        }
        int q, k;
        scanf("%d", &q);
        while(q--){
            int val;
            scanf("%d", &val);
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(l[i]<=val && val<=h[i]) {
                        cnt++, k = i;
                        if(cnt>1) break;
                }
            }
            if(cnt>1 || cnt ==0) printf("UNDETERMINED\n");
            else cout<<s[k]<<endl;
        }
    }
    return 0;
}
