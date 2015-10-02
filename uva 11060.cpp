#include <bits//stdc++.h>
#define CLR(a) memset(a, 0, sizeof(a))
using namespace std;

map<int, int>indegree;
map<int, int>taken;
vector<int> depends[110];
vector<int>task;

int main()
{
    map<string, int> mp;
    map<int, string> mp2;
    string s, p, q;
    int n, k, ques, kase = 0;
    while(scanf("%d", &n)==1)
    {

        k = 0;
        for(int i=0; i<n; i++) {
            cin>>s;
            mp2[k] = s;
            mp[s] = k++;
        }
        scanf("%d", &ques);
        while(ques--)
        {
            cin>>p>>q;
            indegree[mp[q]]++;
            depends[mp[p]].push_back(mp[q]);
        }

        int i, j, k;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++){
                if(!indegree[j] && !taken[j]) {
                    taken[j] = 1;
                task.push_back(j);
                for(k=0; k<depends[j].size(); k++)
                    indegree[depends[j][k]]--;
                break;
            }
        }
    }
    printf("Case #%d: ", ++kase);
    cout<<"Dilbert should drink beverages in this order:";

        for(int i=0; i<task.size(); i++)
            cout<<" "<<mp2[task[i]];
        printf(".\n\n");
        indegree.clear();
        taken.clear();
        task.clear();
        for(int i=0; i<n; i++)
            depends[i].clear();
    }
    return 0;
}
