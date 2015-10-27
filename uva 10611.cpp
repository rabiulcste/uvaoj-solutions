#include <bits//stdc++.h>

using namespace std;

int main()
{
    int a[50000], n, q, val;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &q);
    while(q--){
        int val, ans1 = -1, ans2 = -1;
        scanf("%d", &val);
        if(val>a[n-1]) printf("%d X\n", a[n-1]);
        else {
            for(int i=1; i<n; i++){
                if(a[i-1]<val && val<=a[i]) {
                    ans1 = a[i-1];
                }
                if(a[i-1]<=val && val<a[i]) {
                        ans2 = a[i];
                        break;
                }
            }
            if(ans1==-1) printf("X");
            else printf("%d", ans1);
            if(ans2==-1) printf(" X\n");
            else printf(" %d\n", ans2);
        }
    }
    return 0;
}
