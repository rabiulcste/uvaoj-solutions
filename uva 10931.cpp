#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int parity(int n) {
    int sum = 0;
    while(n!=0) {
        sum += n%2;
        n/=2;
    }
    return sum;
}
int main()
{
    int n;
    while(scanf("%d", &n) && n!=0){
        int res = parity(n);

        int rem[100], i = 0;
    while(n!=0) {
        rem[i++] = n%2;
        n /= 2;
    }
    printf("The parity of ");
    for(int j = i-1; j>=0; j--){
            printf("%d", rem[j]);
        }

        printf(" is %d (mod 2).\n", res);
    }
    return 0;
}
