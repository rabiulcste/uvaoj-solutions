#include <stdio.h>

int main()
{
    long p, b, h, w, price, result, cost=1500000, i, j, room;
    while(scanf("%ld %ld %ld %ld", &p, &b, &h, &w)==4){
      for(i=0; i<h; i++){
        scanf("%ld", &price);
        for(j=0; j<w; j++){
            scanf("%ld", &room);
            result=0;
            if(room>=p){
                result=price*p;
                if(cost>result)
                    cost=result;
            }
        }
      }
      if(cost<b)
                printf("%ld\n", cost);
      else
        printf("stay home\n");
        cost=15000000;

    }
    return 0;
}
