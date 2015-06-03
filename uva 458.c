#include <stdio.h>
#include <string.h>
int main()
{
    int len, i;
    char c[1000];
    while(gets(c)){
       len=strlen(c);
       for(i=0; i<len; i++){
        printf("%c", c[i]-7);
       }
       printf("\n");
    }
return 0;
}
