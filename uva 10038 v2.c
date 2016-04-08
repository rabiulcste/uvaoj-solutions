#include <stdio.h>
#include <math.h>

int main(){
    int i, tcase, flag, val;
    while(scanf("%d", &tcase) == 1){

        int num[3000+10], cnt[3000+10] = {0};
        flag = 0;
        for(i = 0; i < tcase; i++)
            scanf("%d", &num[i]);

        for(i = 0; i < tcase - 1; i++) {
           val = abs(num[i+1] - num[i]);
           if(val>0 && val<tcase) cnt[val] = 1;
        }
        for(i=1; i<tcase; i++) if(cnt[i] == 1) flag++;
        if(flag == tcase-1) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
