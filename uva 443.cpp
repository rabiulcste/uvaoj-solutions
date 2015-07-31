#include <iostream>
#include <cstdio>

using namespace std;

int min(int num1, int num2)
{
    if(num1>num2)
        return num2;
    return num1;
}

int main()
{
    int num1, num2, num3, num4;
    int resNum1, resNum2, resNum3, resNum4;
    int a, b, c, d;
    int humble[5842];

    humble[1] = 1;
    num1 = 2;
    num2 = 3;
    num3 = 5;
    num4 = 7;
    a = b = c = d = 1;
    for(int i = 2; i <= 5842; i++){
        resNum1 = num1*humble[a];
        resNum2 = num2*humble[b];
        resNum3 = num3*humble[c];
        resNum4 = num4*humble[d];
        humble[i] = min(resNum1, min(min(resNum2, resNum3), resNum4));

        if(resNum1 == humble[i])
            a++;
        if(resNum2 == humble[i])
            b++;
        if(resNum3 == humble[i])
            c++;
        if(resNum4 == humble[i])
            d++;
    }
    int n;
    while(scanf("%d", &n) && n!=0){
            printf("The ");
            if(n%100==11 || n%100==12 || n%100==13)
                printf("%dth ", n);
            else if(n %10 == 1)
                printf("%dst ", n);
            else if(n%10 == 2)
                printf("%dnd ", n);
            else if(n%10 == 3)
                printf("%drd ", n);
            else
                printf("%dth ", n);

        printf("humble number is ");
        printf("%d.\n", humble[n]);
    }
    return 0;
}
