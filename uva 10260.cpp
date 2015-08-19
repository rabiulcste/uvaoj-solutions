#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;


int main()
{
    char a[100];
    int res1, res2;
    while(scanf("%s", a)==1){
        int len = strlen(a);
        res1 = -1;
        for(int i=0; i<len; i++){
            if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V') {
                res2 = 1;
            }
            else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||
                    a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z') {
                res2 = 2;
            }
            else if(a[i]=='D'||a[i]=='T') {
                res2 = 3;
            }
            else if(a[i]=='L') {
                res2 = 4;
            }
            else if(a[i]=='M'||a[i]=='N') {
                res2 = 5;
            }
            else if(a[i]=='R') {
                res2 = 6;
            }
            else
                res2 = -1;
            if(res2!=res1 && res2!=-1) cout<<res2;
            res1 = res2;
        }
        printf("\n");
    }
    return 0;
}


