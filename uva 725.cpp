#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    int n; bool blank = false;
    while(scanf("%d", &n)==1 && n){
            if(blank) puts("");
            blank = true;
            bool mainflag = true;
        for(int i=01234; i<=98765/n; i++){
            char str[10], used[10] = {};
            bool subflag = true;
            sprintf(str, "%05d", i);
            for(int j=0; str[j]; j++)
                used[str[j]-'0']++;
            sprintf(str, "%05d", i*n);
            for(int j=0; str[j]; j++)
                used[str[j]-'0']++;
            for(int j=0; j<10; j++){
                if(used[j]!=1)
                    subflag = false;
            }
            if(subflag)
            {
                mainflag = false;
                printf("%05d / %05d = %d\n", i*n, i, n);
            }
        }
        if(mainflag)
            printf("There are no solutions for %d.\n", n);
    }
    return 0;
}
