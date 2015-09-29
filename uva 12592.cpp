#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n, q;
    scanf("%d", &n);

    string s1[25], s2[25];
    char ch;
    ch = getchar();
    for(int i=0; i<n; i++)
    {
        getline(cin, s1[i]);
        getline(cin, s2[i]);
    }
    scanf("%d", &q);
    ch = getchar();
    while(q--)
    {
        string str;
        getline(cin, str);
        for(int i=0; i<n; i++)
        {
            if(str == s1[i]) cout<<s2[i]<<endl;
        }
    }
    return 0;
}
