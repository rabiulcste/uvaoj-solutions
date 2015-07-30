#include <stdio.h>

int main()
{
    int cases, caseno=0, n, p, q, i, j, sum, cot, value[31];

    while(scanf("%d", &cases)==1){
        while(cases--){
                cot=0;
                sum=0;
                j=0;
            scanf("%d %d %d", &n, &p, &q);
            for(i=0; i<n; i++){
                scanf("%d", &value[i]);
            }
            sum+=value[j];
            while(n-- && sum<=q){

            if(n<p){
                    j++;
                    sum+=value[j];
                        cot++;
            }
                    }

            printf("Case %d: %d\n", ++caseno, cot);
        }
    }
    return 0;
}
