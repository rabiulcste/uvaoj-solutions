#include <stdio.h>
#include <string.h>

int countvalue(char a[])
{
    int len, i, sum=0;
    len = strlen(a);
    for(i=0; i<len; i++){
        if(a[i]>='a' && a[i]<='z')
            sum+=a[i]-96;
        else if(a[i]>='A' && a[i]<='Z')
            sum+=a[i]-64;
    }
    return sum;
}

int countfinal(int num)
{
    int rem, res;
    for(;;){
            res=0;
            while(num!=0){
                rem=num%10;
                num=num/10;
                res+=rem;
            }
            if(res>9)
                num=res;
            else
                break;
    }
    return res;
}
int main()
{
    int x, y, p, q, temp;
    double ans;
    char a[26], b[26];
    while(gets(a)){
            gets(b);
            x = countvalue(a);
            y = countvalue(b);
            p = countfinal(x);
            q = countfinal(y);

        if(p>q){
            temp=p;
            p=q;
            q=temp;
        }

        ans = (double)(100*p)/q;
        printf("%0.2lf %%\n", ans);
    }
    return 0;
}
