#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, a[21], mx, mn;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        scanf("%d", &a[0]);
        mx = mn = a[0];
        for(int i = 1; i<n; i++){
                scanf("%d", &a[i]);
            if(a[i]>mx) mx = a[i];
            if(a[i]<mn) mn = a[i];
        }
        int res = 2*(mx - mn);
        printf("%d\n", res);
    }
    return 0;
}
