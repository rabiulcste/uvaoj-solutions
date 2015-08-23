#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long num, date, res;
    while(scanf("%lld %lld", &num, &date)==2){
        res = 0;
        while(date>res){
            res = res + num;
            num = num + 1;
        }
        cout<<num-1<<endl;
    }
    return 0;
}
