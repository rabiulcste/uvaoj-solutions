#include <bits//stdc++.h>

using namespace std;

int main()
{
    int x[1000];
    string s;
    while(cin>>s){
        if(s == "END") break;
        if(s == "1") {printf("1\n"); continue;}
        int digit, temp, i=0;
        digit = s.size();
        x[0] = digit;
        while(true) {
            temp = digit;
            digit = 0;
            while(temp>0){
                digit++;
                temp= temp/10;
            }
            x[++i] = digit;

            if(x[i-1] == x[i]) break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
