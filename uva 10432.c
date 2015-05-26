#include <stdio.h>
#include <math.h>

#define pi acos(-1)

int main()
{
    double r, n, res;
    while(scanf("%lf %lf", &r, &n)==2){
            res=(n*r*r/2)*sin((2*pi)/n);
        printf("%.3lf\n", res);
    }
    return 0;
}
