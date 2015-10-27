#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)==1){
        int a[10000+10], x, y, mn, val, flag = 1;
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        scanf("%d", &val);
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++){
                    if(a[i]+a[j]==val){
                        if(flag) { mn = a[j] - a[i]; flag = 0; x = a[i]; y = a[j]; }
                        if(a[j]-a[i]<mn){
                            x = a[i]; y = a[j];
                        }
                    }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", x, y);
    }
    return 0;
}

