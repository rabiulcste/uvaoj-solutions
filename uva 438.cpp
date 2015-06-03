#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#define pi 3.141592653589793

int main()
{
    double x1, x2, x3, y1, y2, y3, a, b, c, s, r, k, circum;

    while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3)==6){
        a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

        s = (a+b+c)/2;

        k = sqrt(s*(s-a)*(s-b)*(s-c));
        r = (a*b*c)/(4*k);
        circum = 2*pi*r;

        printf("%.2lf\n", circum);
    }
    return 0;
}

