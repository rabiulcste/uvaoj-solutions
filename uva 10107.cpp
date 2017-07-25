#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n=1;
    int a[10001];
    while(scanf("%d", &a[n])==1){
            sort(a, a+n+1);
            if(n==1){
                printf("%d\n", a[1]);
            }
            else if(n%2==0){
                printf("%d\n", (a[n/2]+a[(n/2)+1])/2);
            }
            else if(n%2!=0){
                printf("%d\n", a[(n/2)+1]);
            }
                n++;
    }
    return 0;
}
