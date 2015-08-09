#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int kases;
    int e, f, c, total, r, x, n;
    while(scanf("%d", &kases)==1) {
        while(kases--){
            scanf("%d %d %d", &e, &f, &c);
            total = 0;
            n = e+f;
            while(n>=c){
                r = n/c;
                x = n%c;
                n = x + r;
                total += r;
            }
            printf("%d\n", total);
        }
    }
    return 0;
}
