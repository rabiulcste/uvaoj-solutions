#include <bits//stdc++.h>

using namespace std;

int main()
{
    int i, n, x, y, a, b;
    double m, l;
    while(scanf("%d", &n)==1) {
    m = pow(10.0, n);
    l = pow(10.0, n/2);
    y = l;
    for(i=0; i<m; i++){
           x = sqrt(i);
        if(x*x==i)
            {
                a = i/l;
                b = i%y;
                if((a+b)*(a+b)==i){
                        if(n==2) printf("%02d\n", i);
                        if(n==4) printf("%04d\n", i);
                        if(n==6) printf("%06d\n", i);
                        if(n==8) printf("%08d\n", i);
                    }
            }
    }
    }
    return 0;
}
