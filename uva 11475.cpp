#include <bits//stdc++.h>
using namespace std;
#define mx (int)1e6+10

vector<int> KMP(string t){
    int n = t.size();
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
    string txt;
    while(cin >> txt){
        string str = txt;
        int n, q;
        reverse(txt.begin(), txt.end());
        string tmp = txt + "$" + str;
        vector<int>prefix = KMP(tmp);
        n = tmp.size();
        q = prefix[n-1];
        //cout << txt << " " << q << endl;
        cout << str + txt.substr(q) << "\n";
    }
    return 0;
}

