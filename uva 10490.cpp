#include <bits//stdc++.h>
using namespace std;
#define pow(base,power) pow(base+0.0,power)

int is_prime(int n) {
    int i, prime = 1;
    for (i=3; i<=sqrt(n); i+=2) {
        if ((n % i) == 0) {
            prime = 0;
            break;
            }
        }
    if ((n%2 !=0 && prime && n > 2) || n == 2) {
            return 1;
    }
    return 0;
}

int main()
{
    int i, j, num, topo;
    long long per;
    while(scanf("%d", &num) && num != 0){
        if(is_prime(num)) {
            topo = pow(2, num) - 1;
            if(is_prime(topo)){
                per = (pow(2, num) - 1)* pow(2, num-1);
                printf("Perfect: %lld!\n", per);
            }
            else
                printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
