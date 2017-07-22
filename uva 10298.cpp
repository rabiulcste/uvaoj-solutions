#include <bits//stdc++.h>
using namespace std;
#define mx (int)1e6+10
vector<int> KMP(char *t){
    int n = strlen(t);
    vector<int> prefix(n+1);
    prefix[0] = 0;
    int k = 0;

    for(int i = 1; i < n; i++) {
        while(k>0 && t[k] != t[i]) k = prefix[k-1];
        if(t[k] == t[i]) k++;
        prefix[i] = k;
    }
    return prefix;
}

int main()
{
    char txt[mx];
    while(scanf(" %s", txt)){
        string s = txt;
        if(s == ".") break;
        vector<int>prefix = KMP(txt);
        int n = strlen(txt);
        int p = n - prefix[n-1];
        int q = n / p;
        printf("%d\n", q);
    }
    return 0;
}
