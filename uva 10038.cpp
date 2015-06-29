#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int a[3001]={0};
    int n, i, count, x;
    while(scanf("%d", &n)==1){
        set<int>myset;
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(i=n-1; i>0; i--){
                x = abs(a[i]-a[i-1]);
                if(x<n && x>0)
                myset.insert(x);
        }
        count = myset.size();
        if(count==n-1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
