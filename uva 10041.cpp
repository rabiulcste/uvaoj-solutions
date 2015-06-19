#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int kases, a[500], n, sum, i, mid;
    while(scanf("%d", &kases)==1){
        while(kases--){
            scanf("%d", &n);

            for(i=0; i<n; i++){
                scanf("%d", &a[i]);
            }

            sort(a, a+n);
            mid=n/2;
            sum=0;

            for(i=0; i<n; i++){
                sum = sum + abs(a[i] - a[mid]);
            }

            printf("%d\n", sum);
        }
    }
    return 0;
}
