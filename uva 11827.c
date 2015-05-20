#include <stdio.h>

int gcd(int a, int b)
{
    return b==0?a:gcd(b, a%b);
}
int main()
{
    int t, i, j, n, max, result;
    int a[100];
    char ch;
    while(scanf("%d", &t)==1){
            while(t--){
                    max=0;
                    n=0;
                while (1)
                {
                    scanf("%d", &a[n++]);
                while((ch = getchar()) == ' ');
                    ungetc(ch, stdin);
                if(ch == 10 || ch == -1)
                    break;
                }
                for(i=0; i<n-1; i++){
                    for(j=i+1; j<n; j++){
                            result = gcd(a[i], a[j]);
                            if(max < result){
                        max = result;
                        }
                    }
                }
                printf("%d\n", max);
            }
        }
    return 0;
}

