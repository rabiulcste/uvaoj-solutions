#include <iostream>
#include <cstdio>
#include <cmath>

#define MAX 1010

using namespace std;

char prime[MAX];

void sieve()
{
    int i, j, x, n, p;
    n = MAX;
    x = sqrt(n);
    prime[0] = 1; prime[1] = 0;
    for(i=4; i<=n; i+=2){
        prime[i] = 1;
    }

    for(i = 3; i <= x; i += 2){
        if(prime[i] == 0){
            for(j = i+i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    return;
}

int main()
{
    int num, c, k, cot, arr[1000];
    sieve();
    while(scanf("%d %d", &num, &c)==2) {
        cot = 0;
        k = 0;
        for(int i = 1; i<= num; i++) {
            if(prime[i] == 0){
                cot++;
                arr[k] = i;
                //cout << arr[k] <<endl;
                k++;
            }
        }
        printf("%d %d:", num, c);
        int m = k/2;
        if(c*2>=k)
        {
            for(int i=0; i<k; i++)
            printf(" %d", arr[i]);
        }
        else if(k%2 == 0){
            for(int i = m-c; i <c*2+m-c; i++) {
                printf(" %d", arr[i]);
            }
        }
        else{

            for(int i = m-(c*2-1)/2; i<m+(c*2-1)/2+1; i++) {
                printf(" %d", arr[i]);
            }
        }
        printf("\n\n");
    }
   return 0;
}
