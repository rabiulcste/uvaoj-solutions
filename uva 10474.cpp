#include <bits//stdc++.h>

using namespace std;
int arr[10000+10], pos;
void binarySearch(int l, int r, int x)
{
    if(r >= l)
    {
        int mid = (l + r)/2;
        if(arr[mid] == x) pos = mid;
        if(arr[mid]>=x) binarySearch(l, mid-1, x);
        else binarySearch(mid+1, r, x);
    }
    else return;
}

int main()
{
    int n, q,  kase = 0;
    while(scanf("%d %d", &n, &q)==2){
            if(n==0 && q==0) break;
        printf("CASE# %d:\n", ++kase);
        for(int i=0; i<n; i++) scanf("%d", &arr[i]);
        sort(arr, arr+n);
        while(q--){
            int x;
            scanf("%d", &x);
            pos = -1;
            binarySearch(0, n-1, x);
            if(pos == -1)printf("%d not found\n", x);
            else printf("%d found at %d\n", x, pos+1);
        }
    }
    return 0;
}
