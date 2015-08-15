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
#define ll long long

#define Pi 2*acos(0.0)

using namespace std;

int main()
{
    char a[110], b[110];
    int n, len, grlen, k, cot;
    while(scanf("%d", &n)){
        if(n==0)
            break;
        scanf(" ");
            gets(a);
            len = strlen(a);
            grlen = len/n;
            k = 0;
            for(int i=grlen-1; i<len; i+=grlen){
                    cot = 0;
                for(int j=i; a[j]; j--){
                    b[k] = a[j];
                    k++;
                    cot++;
                    if(cot==grlen)
                        break;
                }
            }
            b[k] = '\0';
        printf("%s\n", b);
    }
    return 0;
}

