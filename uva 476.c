#include <stdio.h>

int main()
{
    int i, j, count, flag;
    double ax[12], ay[12], cx[12], cy[12], x, y;
    char a[20];
    i=0;

    while(scanf("%s", a) && strcmp(a, "*")!=0){
        scanf("%lf %lf %lf %lf", &ax[i], &ay[i], &cx[i], &cy[i]);
        i++;
    }
        count=0;
    while(scanf("%lf %lf", &x, &y) && !(x==9999.9 && y==9999.9)){
            count++;
             flag = 0;
        for(j=0; j<i; j++){
        if(ax[j]<x && x<cx[j] && ay[j]>y && y>cy[j]){
            printf("Point %d is contained in figure %d\n",  count, j+1);
                flag = 1;
            }
        }
        if(flag==0)
            printf("Point %d is not contained in any figure\n",  count);
    }
    return 0;
}
