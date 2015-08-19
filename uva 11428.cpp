#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

int main()
{   int n, x, y, flag;
    while(cin>>n){
    if(n == 0)
        break;
    flag = 0;
    for(x=1; x<60; x++){
        for(y=0; y<=x; y++){
            if((x*x*x-y*y*y) == n){
                    flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    if(flag==1)
        cout << x << " " << y << endl;
    else
        cout << "No solution" << endl;

    }
    return 0;
}



