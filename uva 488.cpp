#include <stdio.h>
int main(){
    int tcase, num, freq, i, j, k, count;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &num, &freq);
        for(k=1; k<=freq; k++){
        for(i = 1; i <= num; i++){
            for(j = 0; j < i; j++){
                printf("%d", i);
            }
            printf("\n");
        }
        for(i = num - 1; i > 0; i--){
            for(j = i; j > 0; j--){
                printf("%d", i);
            }
            printf("\n");
        }
        if(k!=freq) printf("\n");
        }
        if(tcase)printf("\n");
    }
    return 0;
}
