#include <bits//stdc++.h>

using namespace std;

int main()
{
    string s[11];
    int test, mx, in[11], kase = 0;
    scanf("%d", &test);
    while(test--){
            mx = 0;
        for(int i = 0; i < 10; i++){
            cin>>s[i]>>in[i];
            if(mx<in[i]) mx = in[i];
        }
        printf("Case #%d:\n", ++kase);
        for(int i = 0; i < 10; i++)
        {
            if(in[i] == mx) cout<<s[i]<<endl;
        }
    }
    return 0;
}
