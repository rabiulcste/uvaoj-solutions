#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int kases;
    int b_d, b_m, b_y, c_d, c_m, c_y, age;
    while(scanf("%d", &kases)==1) {
        for(int i=1; i<=kases; i++){

            scanf("%d/%d/%d", &c_d, &c_m, &c_y);
            scanf("%d/%d/%d", &b_d, &b_m, &b_y);

            age = c_y-b_y;
            if(b_m>c_m || (b_m==c_m && b_d>c_d))
            age--;

            printf("Case #%d: ", i);
            if(age<0)
                printf("Invalid birth date\n");
            else if(age>130)
                printf("Check birth date\n");
            else
                printf("%d\n", age);
        }
    }
    return 0;
}
