#include <stdio.h>
#include <string.h>
int main()
{
    long long i, p, len;
    char n[1000000];
    while(scanf("%s", &n) && (strcmp(n, "0")!=0)){
        i=p=0;
        len = strlen (n);
        for (i=0; i< len; i++) {
            p = ((p * 10) + (n[i]-'0')) % 17;
        }

    if(p==0)
        printf("1\n");
    else
        printf("0\n");
    }
     return 0;
}
