#include <bits//stdc++.h>

using namespace std;
char fibo[5000][1200];
int main()
{
    int i, j, n, m, carry, k, t1, t2;

    fibo[0][0] = '0';
    fibo[1][0] = '1';
    int len1 = strlen(fibo[0]); //cout<<len1<<endl;
    int len2 = strlen(fibo[1]); //cout<<len2<<endl;

    for(i=2; i<=5001; i++){
        char res[1010];
        carry = m = 0;
        for(j = len1-1, k = len2-1; j >= 0 || k >= 0; j--, k--)
        {
            t1 = t2 = 0;
            if(j >= 0) t1 = fibo[i-2][j] - '0';
            if(k >= 0) t2 = fibo[i-1][k] - '0';
            res[m++] = ((t1 + t2 + carry)%10) + '0';
            carry = (t1 + t2 + carry) / 10;

        }
        while(carry != 0) {
            res[m++] = (carry % 10) + '0';
            carry /= 10;
        }
        res[m] = '\0';
        int y = 0;
        for(int x=m-1; x>=0; x--, y++) {

                fibo[i][y]=res[x];

        }
        //cout<<fibo[i]<<endl<<endl;
        len1 = strlen(fibo[i-1]);
        len2 = strlen(fibo[i]);
    }

    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<fibo[n]<<"\n";
    }
    return 0;
}



