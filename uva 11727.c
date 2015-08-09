#include <stdio.h>

int main()
{
    int cases, i, j, temp, caseno=0;
    int a[10];
    while(scanf("%d", &cases)==1){
        while(cases--){

            for(i=0; i<3; i++){
                scanf("%d", &a[i]);
            }
            for(i=3-2;i>=0;i--){
      for(j=0; j<=i;j++){
           if(a[j]>a[j+1]){
               temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
      }
  }
    printf("Case %d: %d\n", ++caseno, a[1]);
            }
    }
    return 0;
}
