#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    long long kases = 0, j, i = 8, temp;
    while(kases<10){
        temp = i*(i+1)/2;
        j = sqrt(temp);
        if(temp == j*j){
            printf("%10lld%10lld\n", j, i);
            kases++;
        }
        i++;
    }
    return 0;
}
