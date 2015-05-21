#include<stdio.h>

int totient(int n)
{
    int i, ans = n;

    for (i=2; i*i<=n; i++)
    {
        if (n%i==0)
            ans-=ans/i;

        while(n%i==0)
            n/=i;
    }

    if (n!=1)
        ans-=ans/n;
    return ans;
}

int main()
{
    int n;
        while(scanf("%d",&n) && n!=0){
        printf("%d\n", totient(n));
    }
    return 0;
}
