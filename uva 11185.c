#include <stdio.h>

int main()
{
    long long i, j, temp;
    int s[100000];
    while(scanf("%lld", &temp) && temp>=0){
            if(temp==0)
            printf("0\n");
    else
    {
        i=1;
        while(temp!=0){
            s[i++]=temp%3;
            temp=temp/3;
        }
        for(j=i-1; j>0; j--){
            printf("%d", s[j]);
        }
        printf("\n");
    }
    }
    return 0;
}
