#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[40], b[40], c[40];
    int caseno=0, t, len, i, j;
    while(scanf("%d\n", &t)==1){
                while(t--){
        gets(a);
        gets(b);
        if(strcmp(a, b)==0){
            printf("Case %d: Yes\n", ++caseno);
        }
        else
        {
                len=strlen(a);
                j=0;
            for(i=0; i<len; i++){
                if(a[i]!=' '){
                    c[j]=a[i];
                    j++;
                }
            }
            c[j]='\0';
            if(strcmp(b, c)==0){

                printf("Case %d: Output Format Error\n", ++caseno);
            }
            else
                printf("Case %d: Wrong Answer\n", ++caseno);
        }
    }
    }
    return 0;
}
