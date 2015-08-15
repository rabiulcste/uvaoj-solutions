#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <cctype>
#include <map>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#define ll long long

#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    char a[1000], c[1000], test[1000];
    int sum, count, len;
    while(scanf("%s", a)){
        if(strcmp(a, "0")==0)
            break;
            strcpy(c, a);
            count = 0;
        while(1){
            len = strlen(c);
            sum = 0;
            for(int i=0; i<len; i++){
                sum += c[i]- 48;
            }
            sprintf(test,"%d", sum);
            if(sum>9){
                strcpy(c, test);
                count++;
            }
            else
                break;
        }
        if(sum%9==0)
            printf("%s is a multiple of 9 and has 9-degree %d.\n", a, count+1);
        else
            printf("%s is not a multiple of 9.\n", a);
    }
    return 0;
}


