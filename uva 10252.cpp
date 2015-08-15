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
    char a[1010], b[1010];

    int len1, len2, k;
    while(gets(a)){
        gets(b);
        len1 = strlen(a);
        len2 = strlen(b);
        sort(a, a+len1);
        sort(b, b+len2);
        string k = "";
        for(int i=0, j=0; i<len1 && j<len2;){
            if(a[i]==b[j]){
                     k+= a[i];
                     i++;
                     j++;
            }
            else{
                  while(a[i] < b[j]){
                        ++i;
                        if(i == len1) break;
                  }
                  while(b[j] < a[i]){
                        ++j;
                        if(j == len2) break;
                  }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}



