#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int pos[10010];
    int n;
    while(scanf("%d:", &n) && n!=0){
            bool ans = false;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            pos[temp] = i;

        }

        for(int i=0; i<n; i++)
        for(int j=1; i+2*j<n; j++){
            if(pos[i]<pos[i+j] && pos[i+j]<pos[i+2*j] ||
               pos[i]>pos[i+j] && pos[i+j]>pos[i+2*j]){
                    ans = true; break;
               }
        }

        if(ans) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
