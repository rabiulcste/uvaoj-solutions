#include <bits//stdc++.h>

using namespace std;

int main()
{
    int t;
    char in[10];
    double res, cal;
    scanf("%d", &t);
    while(t--)
    {
        res = 0, cal = 0;
        scanf("%s", in);
        int k = 2;
        for(int i = 0; i < 3; i++) {
            res += (in[i]-65)*pow(26, k--);
        }
        for(int i = 4; i < 8; i++)
        {
            cal = cal*10 + (in[i]-48);
        }

        if(abs(res-cal)<=100) cout<<"nice"<<endl;
        else cout<<"not nice"<<endl;
    }
    return 0;
}
