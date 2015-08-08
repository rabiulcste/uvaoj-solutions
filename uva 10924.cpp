#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if(n <= 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= n/ i;i += 2)
        if(n % i == 0) return false;

    return true;
}

int count(char a[]) {
    int len = strlen(a);
    int value = 0;
    for(int i = 0; i < len; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            value += a[i] - 38;
        }

        if(a[i] >= 'a' && a[i] <= 'z'){
            value += a[i] - 96;
        }
    }
    return value;
}

int main()
{
    char a[100];
    while(gets(a)){
        int res = count(a);

        bool ans = isPrime(res);

        if(ans)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
}
