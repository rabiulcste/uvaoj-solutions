#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

struct sequence
{
    string input;
    int measure;
}a[110];

int countMeasure(string s)
{
    int count = 0;
    int len  = s.size();
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(s[i]>s[j])
                count++;
        }
    }

    return count;
}

bool compare(sequence x, sequence y){
    if ( x.measure < y.measure ) return true;
    return false;
}

int main()
{
    int kases;
    cin>>kases;
    bool blank = false;
    while(kases--){
        int n, m;
        scanf ("%d %d", &n, &m);

        for(int i=0; i<m; i++){
            cin>>a[i].input;

            a[i].measure = countMeasure(a[i].input);
        }

        stable_sort(a, a+m, compare);

        if(blank) printf ("\n");
        blank = true;

       for(int i=0; i<m; i++){
        cout << a[i].input << endl;
       }
    }
    return 0;
}
