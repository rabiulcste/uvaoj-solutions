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
    string a, b;

    int len1, len2, k;
    while(getline(cin, a)){
        getline(cin, b);
        len1 = a.size();
        len2 = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i =0, j = 0;
        for(;;){
                if(i>=len1 || j>=len2) break;
            if(a[i]==b[j]){
                     printf("%c", a[i]);
                     i++;
                     j++;
            }
            else{
                if(a[i] < b[j]) ++i;
                else ++j;
            }
        }
        printf("\n");
    }
    return 0;
}
