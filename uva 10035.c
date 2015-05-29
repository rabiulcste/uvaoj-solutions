#include <stdio.h>
#include <string.h>

int main()
{
    int x, y, count, res;
    char a[20], b[20];
    while(scanf("%s %s", a, b) && strcmp(a, "0")!=0 && strcmp(b, "0")!=0){
        x = strlen(a);
        y = strlen(b);
        a[x] = '\0';
        b[y] = '\0';
        count = 0;
        while(x>=0 && y>=0){
            res=a[x-1]+b[y-1]-48-48;
            if(res>=10){
                count++;
            }
            x--;
            y--;
                if(x<0 || y<0)
                break;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("%d carry opeartion.\n", count);
        else
            printf("%d carry opeartions.\n", count);
    }
    return 0;
}
