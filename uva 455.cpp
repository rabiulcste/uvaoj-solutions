#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
#define mx (int)1e2+10

vector<int> KMP(char *t){
    int n = strlen(t);
    vector<int> prefix(n);
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
    int test;
    scanf("%d", &test);
    while(test--){
        scanf(" %s", txt);
        vector<int>prefix = KMP(txt);
        int n = strlen(txt);
        int p = n - prefix[n-1];
        int q = n / p;
        if(p*q == n) printf("%d\n", p);
        else printf("%d\n", n);
        if(test) printf("\n");
    }

    return 0;
}
