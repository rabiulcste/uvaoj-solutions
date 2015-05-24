#include <stdio.h>
#include <math.h>

#define MAX 1000001

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

void check_prime(int n)
{
    long i, flag=0;
    for( i = 2;  i <= n; i++){
        if(prime[i]==0 && prime[n-i]==0){
                flag=1;
                break;
        }
    }

            if(flag)
                printf("%ld = %ld + %ld\n", n, i, n-i);
            else
                printf("Goldbach's conjecture is wrong.\n");
        return;
}

int main()
{
    int num;
    sieve();
    while(scanf("%d", &num) && num>0){
            check_prime(num);
    }
   return 0;
}

