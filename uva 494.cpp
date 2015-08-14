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
    char a[1000];
    int n, w;
    while(gets(a)){
        n = 0; w = 1;
        for(int i=0; a[i]; i++){
         if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z'){
            if(w)
                n++;
            w = 0;
        }
        else
            w = 1;
        }
        cout<<n<<endl;
    }
    return 0;
}
