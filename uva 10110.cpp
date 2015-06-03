#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    long long num, root;
    while(scanf("%lld", &num) && num!=0){
        root = sqrt(num);

        if(num==root*root)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

