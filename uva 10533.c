#include <stdio.h>
#include <math.h>

#define MAX 1000001

int d_primes[MAX];
char prime[MAX];

void sieve()
{
    int i, j, x, n, p;
    n = MAX;
    x=sqrt(n);
    prime[0] = prime[1] = 1;
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

int sum(int n){
    int sum=0, r;
    while(n!=0){
            r=n%10;
            n/=10;
            sum += r;
        }
    return sum;
}

int main()
{
    int a, b, t, i, count=0;
            sieve();
            for(i = 0; i<=1000000; i++)
            {
                if(prime[i]==0 && prime[sum(i)]==0)
                        count++;

                d_primes[i] = count;
            }

    while(scanf("%d", &t) && t>0){

            while(t--){
    scanf("%d %d", &a, &b);
        printf("%d\n", d_primes[b]-d_primes[a-1]);
    }
    }
   return 0;
}

