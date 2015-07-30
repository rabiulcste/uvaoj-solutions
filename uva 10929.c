#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int oddSum, evenSum, i, result;
    char n[1001]={0};
    while(scanf("%s", &n) && strcmp(n, "0")!=0){
        oddSum=0;
        evenSum=0;
        i=0;
        while(n[i]!='\0'){
            if(i%2==0)
                oddSum+=(n[i]-48);
            else
                evenSum+=(n[i]-48);
                ++i;
        }
        result=abs(oddSum-evenSum);
        if(result==0 || result%11==0)
            printf("%s is a multiple of 11.\n", n);
        else
            printf("%s is not a multiple of 11.\n", n);
    }
    return 0;
}
