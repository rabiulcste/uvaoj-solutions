#include <bits//stdc++.h>

using namespace std;

int main()
{
    int kases, A, B, C;
    cin>>kases;
    for(int tc=0; tc<kases; tc++){
            bool sol = false;
        cin>>A>>B>>C;
        for(int x=-100; x<=100; x++)
            for(int y=-100; y<=100; y++)
                for(int z=-100; z<=100; z++)
                {
                    if(x!=y && y!=z && z!=x && x+y+z==A && x*y*z==B && x*x+y*y+z*z==C){
                        if(!sol){
                            printf("%d %d %d\n", x, y, z);
                            sol = true;
                        }
                    }
                }
        if(!sol) printf("No solution.\n");
    }
    return 0;
}
