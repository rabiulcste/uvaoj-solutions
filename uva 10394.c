#include <stdio.h>
#include <math.h>

#define MAX 20000001

char prime[MAX];
int twin[MAX];

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

void twin_prime()
{
    int i, j = 1;
    for( i = 3;  i < MAX; i++){
        if(prime[i]==0 && prime[i+2]==0)
        {
            twin[j++] = i;
        }
    }
}

int main()
{
    int num;
    sieve();
    twin_prime();
    while(scanf("%d", &num)==1){
        printf("(%d, %d)\n", twin[num], twin[num]+2);
    }
   return 0;
}
