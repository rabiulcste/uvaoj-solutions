#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[1000], c;
    int i;
    while(scanf("%s", a)!=EOF){
            c=getchar();
       for(i=strlen(a)-1; i>=0; i--){
        printf("%c", a[i]);
       }
       putchar(c);
    }
    return 0;
}
