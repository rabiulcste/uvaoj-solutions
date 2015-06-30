#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, testcase, res, rem, caseno=0;

    while(scanf("%d", &testcase)==1){
        while(testcase--){
                scanf("%d", &temp);
                num = temp;
            for(;;){
                    res=0;
                while(num!=0){
                    rem=num%10;
                    num=num/10;
                    res+=rem*rem;
                }
            if(res>9)
                num=res;
            else
                break;
            }
            if(res==1)
                printf("Case #%d: %d is a Happy number.\n", ++caseno, temp);
            else
                printf("Case #%d: %d is an Unhappy number.\n", ++caseno, temp);
        }
    }
    return 0;
}
