#include <bits//stdc++.h>
#define ll long long
using namespace std;
int cot;
void primeFactors(int n)
{
    while(n%2 == 0)
    {
        if(cot != 0) printf(" x 2");
        else printf(" 2");
        cot++;
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        while(n%i == 0)
        {
            if(cot != 0)
                printf(" x %d", i);
            else
                printf(" %d", i);
            cot++;
            n /= i;
        }
    }

    if(n != -1 && n != 1){
        if(cot != 0)
            printf(" x %d", n);
        else
            printf(" %d", n);
    }
    cout<<endl;
    return;
}

int main()
{
    int n;
    while(scanf("%d", &n) && n!=0)
    {
        printf("%d =", n);
        cot = 0;
        if(n < 0) {
            cout<<" -1";
            n = -n;
            cot++;
        }
        primeFactors(n);
    }
}
