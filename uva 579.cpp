#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int main()
{
    float h, m, hour_angle, minute_angle, angle;
    while(scanf("%f:%f", &h, &m)==2){
            if(h==0 && m==0)
            break;

        if(h == 12)
        h = 0;

    hour_angle = 0.5*(h*60+m);
    minute_angle = m*6.0;

    angle = abs(hour_angle - minute_angle);

    if(angle>180)
        angle = 360-angle;

        printf("%.3f\n", angle);
    }
    return 0;
}

