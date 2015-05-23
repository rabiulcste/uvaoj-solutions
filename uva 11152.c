#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main()
{
    double r, R, tri_area, s, a, b, c, bio_area, ros_area, sun_area;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3){
        s=(a+b+c)/2;
        tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
        R=a*b*c/(4*tri_area);
        r=tri_area/s;
        ros_area=pi*r*r;
        bio_area=tri_area-ros_area;
        sun_area=pi*R*R-tri_area;
        printf("%.4lf %.4lf %.4lf\n", sun_area, bio_area, ros_area);
    }
    return 0;
}
