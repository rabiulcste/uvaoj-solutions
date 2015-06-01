#include <stdio.h>
#include <string.h>

int main()
{
    int x, y, i, j, d, count;
    char a[100000], b[100000];
    while(scanf("%s %s", a, b)==2){
        x = strlen(a);
        y = strlen(b);
        count = 0;
        d = 0;
        for(i=0; i<x; i++){
            for(j=d; j<y; j++){
                if(a[i]==b[j]){
                    count++;
                    d = j+1;
                    break;
                }
            }
        }
        if(count==x)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
