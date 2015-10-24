#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n, k, test, cnt, kase = 0, total_cnt;
    char str[500+10];
    scanf("%d", &test);
    while(test--) {
        scanf("%d %d", &n, &k);
        scanf(" %s", str);
        total_cnt  = 0;

        for(int i=1; i<n; i++){
                cnt = 0;
            for(int j=i-k; j<i; j++) {
                if(j<0)
                        j = 0;
                    if(str[i]==str[j]) {
                        cnt++; break;
                    }
                }
            if(cnt>0) total_cnt++;
        }

        printf("Case %d: %d\n", ++kase, total_cnt);
    }
    return 0;
}
