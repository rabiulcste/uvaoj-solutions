#include <stdio.h>
#include <string.h>

int main()
{
    int x, y, i, j, count;
    char a[100], b[100];
    while(scanf("%s %s", a, b)!=EOF){
        x = strlen(a);
        y = strlen(b);
        count = 0;
        for(i=0; i<y; i++){
            for(j=0; j<x; j++){
                if(b[i]==a[j]){
                    count++;
                }
            }
        }
        if(count>=y)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
