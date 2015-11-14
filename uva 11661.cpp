#include <bits//stdc++.h>

using namespace std;

int main()
{
    long n;
    string s;
    while(scanf("%ld", &n)==1 && n!=0){
        cin>>s;
        long posr, posd, r, d, cnt, flag, dist;
        posr = posd = r = d = 0;
        flag = 1;
        dist = 2000001;

        for(int i=0; i<n; i++){
            if(s[i] == 'Z') { flag = 0; break; }
            if(s[i] == 'R') {posr = i; r=1;}
            if(s[i] == 'D') {posd = i; d=1;}
            if(r==1 && d==1) {
                if(abs(posr-posd)<dist) dist = abs(posr - posd);
               // cout<<i<<endl;
               // cout<<r<<" "<<d<<endl<<endl;
            }
        }

        if(flag == 0) printf("0\n");
        else printf("%ld\n", dist);
    }
}
