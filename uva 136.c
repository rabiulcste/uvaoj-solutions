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
    int ugly[10000];
    int num1, num2, num3, i;
    int resNum1, resNum2, resNum3;
    int a, b, c;

    ugly[1] = 1;
    num1 = 2;
    num2 = 3;
    num3 = 5;

    a = b = c = 1;

    for(i=2; i<=1500; i++){
        resNum1 = num1*ugly[a];
        resNum2 = num2*ugly[b];
        resNum3 = num3*ugly[c];

        ugly[i] = min(resNum1, min(resNum2, resNum3));

        if(resNum1==ugly[i])
            a++;
        if(resNum2==ugly[i])
            b++;
        if(resNum3==ugly[i])
            c++;
    }

    printf("The 1500'th ugly number is %d", ugly[1500]);

    return 0;
}
