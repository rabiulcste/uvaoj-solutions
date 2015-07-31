#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    char a[1000];
    int x, n, len;
    while(cin.getline(a, 1000)){
            n = 0;
    if(a[0] - 48 >= 0 && a[0] - 48 <= 9) {
            len = strlen(a);
            reverse(a, a+len);
        for(int i = 0; a[i]; ++i){
          n = n*10 + a[i] - 48;

          if((n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32
             || n == 33 || n == 44 || n == 46 || n == 58
             || n == 59 || n == 63){
                printf("%c", n);
                n = 0;
             }
        }
    }
    else
    for(int i = strlen(a) - 1; i >= 0; i--){
        x = (int)a[i];
            while(x != 0){
                printf("%d", x%10);
                x /= 10;
            }
        }
    printf("\n");
    }
    return 0;
}
