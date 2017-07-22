#include <stdio.h>

int main()
{
    int t, l, a, b, k, j, i;
    scanf("%d", &t);
        for(l=0; l<t; l++){
                if(l>0)
                printf("\n");
            scanf("%d", &a);
            scanf("%d", &b);
                for(i=0; i<b; i++){
                        if(i>0){
                printf("\n");
                    }
                    for(j=1; j<=a; j++){
                        for(k=0; k<j; k++)
                            printf("%d", j);
                        printf("\n");
                    }
                    for(j=a-1; j>0; j--){
                        for(k=j; k>=1; k--)
                            printf("%d",j);
                        printf("\n");
                    }
        }
    }
    
    return 0;
}
