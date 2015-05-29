#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i, k, c, j, len;
    while(scanf("%s", &a)!=EOF){
        k=0;
        c=0;
            len=strlen(a);
            for(j=0; j<len; j++){
                if(a[j]==a[len-j-1]){
                    k++;
                }
            }

        for(i=0; i<len; i++){
            if((a[i]=='A' && a[len-i-1]=='A')||(a[i]=='E' && a[len-i-1]=='3')||(a[i]=='3' && a[len-i-1]=='E')||
               (a[i]=='H' && a[len-i-1]=='H')||(a[i]=='I' && a[len-i-1]=='I')||(a[i]=='J' && a[len-i-1]=='L')||
               (a[i]=='L' && a[len-i-1]=='J')||(a[i]=='M' && a[len-i-1]=='M')||(a[i]=='O' && a[len-i-1]=='O')||
               (a[i]=='2' && a[len-i-1]=='S')||(a[i]=='T' && a[len-i-1]=='T')||(a[i]=='U' && a[len-i-1]=='U')||
               (a[i]=='V' && a[len-i-1]=='V')||(a[i]=='W' && a[len-i-1]=='W')||(a[i]=='X' && a[len-i-1]=='X')||
               (a[i]=='Y' && a[len-i-1]=='Y')||(a[i]=='Z' && a[len-i-1]=='5')||(a[i]=='5' && a[len-i-1]=='Z')||
               (a[i]=='1' && a[len-i-1]=='1')||(a[i]=='S' && a[len-i-1]=='2')||(a[i]=='8' && a[len-i-1]=='8'))
                c++;
        }
        if(k==len && len==c)
            printf("%s -- is a mirrored palindrome.\n\n", a);
        else if(k==len && len!=c)
            printf("%s -- is a regular palindrome.\n\n", a);
        else if(k!=len && len==c)
            printf("%s -- is a mirrored string.\n\n", a);
        else if(k!=len && len!=c)
            printf("%s -- is not a palindrome.\n\n", a);
    }
    return 0;
}
