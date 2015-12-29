#include <bits//stdc++.h>
using namespace std;

string add(string a, string b)
{
    int i, j, carry, t1, t2, temp;
    string ans;
    int len1 = a.length();
    int len2 = b.length();

    carry = 0;

    for(i = len1 - 1, j = len2-1; i >= 0 || j >= 0; i--, j--)
    {
        t1 = t2 = 0;
        if(i >= 0) t1 = a[i] - '0';
        if(j >= 0) t2 = b[j] - '0';

        temp = ((t1 + t2 + carry)%10) + '0';
        carry = (t1 + t2 + carry) / 10;
        ans.insert(ans.begin(), temp);
    }

    if (carry) ans.insert(ans.begin(), carry + '0');

    return ans;
}

int main()
{
    int i, n;
    string fibo[5001];
    fibo[0] = "0";
    fibo[1] = "1";
    for(i=2; i<=5000; i++){
        fibo[i] = add(fibo[i-1], fibo[i-2]);
        //printf("%s", res[i].c_str());
    }
    while(scanf("%d", &n) == 1) {
        printf("The Fibonacci number for %d is %s\n", n, fibo[n].c_str());
    }

    return 0;
}
