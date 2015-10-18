#include <bits//stdc++.h>

using namespace std;

int main()
{
    int k, in[100];
    bool blank = false;
    while(scanf("%d", &k)==1 && k) {
            if(blank) puts("");
            blank = true;
        for(int i=0; i<k; i++) cin>>in[i];
        sort(in, in+k);

        for(int a=0; a<k-5; a++)
            for(int b=a+1; b<k-4; b++)
                for(int c=b+1; c<k-3; c++)
                    for(int d=c+1; d<k-2; d++)
                        for(int e=d+1; e<k-1; e++)
                            for(int f=e+1; f<k; f++)
                                printf("%d %d %d %d %d %d\n", in[a], in[b], in[c], in[d], in[e], in[f]);
    }
}
