#include <stdio.h>
#include <string.h>

int main()
{
    int cases, len, j, m, a, r, i, t, g, count;
    char s[601];
    
    while(scanf("%d", &cases) == 1){
        while(cases--){
                count= m = a = r = i = t = g = 0;
            scanf("%s", s);
            len = strlen(s);

            for(j=0; j<len; j++){
                if(s[j]=='M')
                    m++;
                else if(s[j]=='A')
                    a++;
                else if(s[j]=='R')
                    r++;
                else if(s[j]=='G')
                    g++;
                else if(s[j]=='I')
                    i++;
                else if(s[j]=='T')
                    t++;
            }
            while(m>=1 && a>=3 && r>=2 && i>=1 && t>=1 && g>=1){
                    count++;
                    m-=1;
                    a-=3;
                    r-=2;
                    i-=1;
                    t-=1;
                    g-=1;
            }
        printf("%d\n", count);
        }
    }
    return 0;
}
