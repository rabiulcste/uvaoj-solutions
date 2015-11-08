#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n, i, j, a[11], p, q;
    scanf("%d", &n);
    printf("Lumberjacks:\n");
    for(i = 0; i < n; i++){
            p = q = 1;
        for(j = 0; j < 10; j++) scanf("%d", &a[j]);

        for(j = 0; j<10-1; j++){
            if(a[j]<a[j+1]) p++;
            if(a[j]>a[j+1]) q++;
        }

        if(p == 10 || q == 10) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}

