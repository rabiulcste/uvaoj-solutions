#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n, a[1010], kase = 0;
    while(scanf("%d", &n)==1){
            if(n==0) break;
        printf("Case %d:\n", ++kase);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        int q;
        scanf("%d", &q);
        while(q--){
            int val, closest_sum = 0, result = 0, mn, i, j;
        scanf("%d", &val);
        mn = abs(a[0]+a[1]-val);
        for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                        if(i!=j){
                            closest_sum = a[i] + a[j];
                            if(abs(closest_sum-val)<=mn){
                                mn = abs(closest_sum-val);
                                result = a[i]+a[j];
                                // cout<<"\t"<<mn<<"\t"<<result<<endl;
                            }
                    }
                }
            }
        printf("Closest sum to %d is %d.\n", val, result);
        }
    }
    return 0;
}
