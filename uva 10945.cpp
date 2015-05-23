#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int len, i, j;
    char b[10000];
    while(gets(b) && strcmp("DONE", b)!=0){
            char a[10000];
            char c[10000];
            j=0;
            len=strlen(b);
            for(i=0; i<len; i++){
                if(b[i]>=65 && b[i]<=90){
                    a[j]=b[i]+32;
                    j++;
                }
                else if(b[i]>=97 && b[i]<=122){
                    a[j]=b[i];
                    j++;
                }
            }
            a[j]='\0';

            strcpy(c, a);
            reverse(c, c+j);
        if(strcmp(a, c)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
