#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
    int n, x, i, j, a[1005], b[1005];
    while(scanf("%d", &n) && n!=0){
    while(scanf("%d", &x)){
            if(x == 0) break;
        stack<int> stak;
        a[1] = x; b[1] = 1;
        for(i=2; i<=n; i++){
            scanf("%d", &a[i]);
            b[i] = i;
        }
        i = 1; j = 1;
        while(i<=n){
                int flag = 0;
            if(!stak.empty()) {
                if(a[i] == stak.top()){
                    //cout<<a[i]<<endl;
                    stak.pop();
                    i++;
                    flag = 1;
                }
            }
            if(a[i] == b[j]) {
                //cout<<i<<" "<<b[j]<<endl;
                i++; j++;
                flag = 1;
            }
            if(j==n+1 && !flag) break;
            if(!flag) {
                stak.push(b[j]);
                // cout<<"stak_top "<<stak.top()<<endl;
                j++;
            }

        }
        i--;
        if(stak.empty()) printf("Yes\n");
        else printf("No\n");
        }
        printf("\n");

    }
    return 0;
}
