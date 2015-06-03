#include <stdio.h>

int main()
{
    long long n, rev, temp, count, t;
    while(scanf("%lld", &t) && t>0){
        while(t--){
                count=0;
            scanf("%lld", &n);
            while(1){
            temp=n;
            rev=0;
            while(n!=0){
                rev=rev*10+n%10;
                n=n/10;
            }
            if(rev==temp){
                printf("%lld %lld\n", count, rev);
                break;
            }
            else
                n=temp+rev;
                count++;
            }
        }
    }
    return 0;
}
