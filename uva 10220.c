// UVA 10220 - I Love Big Numbers!
// here, you can find factorial of a number which may have up to 1000 digits.
// and then we add all the digits as question requires and print that.
// Author: Rabiul  Awal, NSTU_CSTE

#include <stdio.h>

int main()
{
    int a[1000];
    int m, n, x, temp, sum, i, j;
    while(scanf("%d", &n)==1){
        a[0]=1; //initializes array with only 1 digit, the digit 1.
        m=1; // initializes digit counter
        sum=0;
        temp=0; //Initializes carry variable to 0.
        for(i=1; i<=n; i++){
            for(j=0; j<m; j++){
                x=a[j]*i+temp;//x contains the digit by digit product
                a[j]=x%10; //Contains the digit to store in position j
                temp=x/10; //Contains the carry value that will be stored on later indexes
            }
            while(temp>0){ //while loop that will store the carry value on array.
                a[m]=temp%10;
                temp=temp/10;
                m++; // increments digit counter
            }
        }
        for(j=m-1; j>=0; j--){
            sum+=a[j];
        }
        printf("%d", sum); //here is sum of all digits.
        printf("\n");
    }
    return 0;
}
