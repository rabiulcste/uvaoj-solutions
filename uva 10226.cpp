#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    map <string, int> m;
    vector <string> trees;

    int kases;
    //freopen ("in", "r", stdin);
    //freopen ("out", "w", stdout);
    cin>>kases;
    getline(cin, input); // \n
	getline(cin, input); // empty line

    while(kases--){
        m.clear();
        trees.clear();
        int total = 0;

        while(getline(cin, input))
        {
            if(input == "") break;

            if(!m[input])
            {
                m[input] = 1;
                trees.push_back(input);
            }
            else
                m[input]++;
            total++;
        }

        sort(trees.begin(), trees.end());

        for(int i = 0; i < trees.size(); i++)
        {
            cout << trees[i] << " ";
            printf("%.4lf\n", m[trees[i]] * 100.00 / (double)total);
        }
        if(kases>0)
            cout<<endl;
    }
    return 0;
}
