#include <bits//stdc++.h>
using namespace std;

const int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

string ok(long long n)  /* Function to convert decimal to binary.*/
{
    string bin = "";
    while (n!=0)
    {
        int rem = n%2;
        n /= 2;
        bin += rem + '0';
    }
    //reverse(bin.begin(), bin.end());
    return bin;
}

long long sol(string s)
{
    long long decimal = 0, i = 0, rem, k = 0;
    int n = s.size();
    while(n)
    {
        rem = s[k++] - '0';
        n--;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}


int main()
{
    long long a, b;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin >> a >> b) {
        string s, s1, s2;
        s1 = ok(a);
        s2 = ok(b);

        int l1 = s1.size();
        int l2 = s2.size();
        s = "";
        for(int i=0; i<max(l1, l2); i++) {
            if(i<l1 && i<l2) {
                int tt = s1[i] - '0' + s2[i] - '0';
                //cout << s1[i] << " " << s2[i] << endl;
                if(tt == 0 || tt == 1) s += (tt + '0');
                else s += '0';
            }
            else if(i < l1) s += s1[i];
            else if(i < l2) s += s2[i];
        }
        //cout << s1 << " " << s2 <<" " <<s<< endl;
        cout << sol(s) << endl;
    }
    return 0;
}
