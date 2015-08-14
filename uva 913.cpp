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
    long long n, last, output;
    while(cin>>n)
    {
        last = (n*(n+2))/2;
        output = 3*last-6;
        cout<<output<<endl;
    }
    return 0;
}

