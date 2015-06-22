#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    char s[20000];
    int len, i, j, kases, caseno=0;

        scanf("%d", &kases);
        getchar();
        getchar();

        for(i=1; i<=kases; i++){
            printf("Case #%d:\n", ++caseno);
        while(gets(s)){
             if(s[0]=='\0') break;
            char *ptr;
            ptr = strtok(s, " ");
            j = 0;
        while(ptr!=NULL){
            string a = ptr;
        if(a.size()>j){
            printf("%c", a[j]);
            j++;
        }
         ptr=strtok(NULL," ");
        }
        printf("\n");
    }
     if(i!=kases) printf("\n");
    }
    return 0;
}

