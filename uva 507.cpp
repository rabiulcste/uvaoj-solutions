#include <bits//stdc++.h>
using namespace std;

int main()
{
    int stop[30000];
    int i, j, kases, m, ans, sum, imax, imin, tmin;
    scanf("%d", &kases);
    for(i=1; i<=kases; i++) {
            scanf("%d", &m);
        stop[0] = 0;
        for(j=1; j<m; j++) scanf("%d", &stop[j]);

        sum = ans = imax = imin = tmin =0;

        for(j=1; j<m; j++) {
            sum+=stop[j];
            if(sum>ans || (sum == ans && (j-tmin)>(imax-imin))) {
                ans = sum;
                imax = j;
                imin = tmin;
            }

            if(sum<0) {
                sum = 0;
                tmin = j;
            }
        }
        if(ans>0)
            printf("The nicest part of route %d is between stops %d and %d\n", i, imin + 1, imax + 1);
        else
            printf("Route %d has no nice parts\n", i);
    }
    return 0;
}
