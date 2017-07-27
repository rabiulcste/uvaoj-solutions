#include <bits//stdc++.h>
using namespace std;

int ans = 0;
struct node
{
    int cnt;
    node *next[26+1];
    node()
    {
        cnt = 0;
        for(int i = 0; i < 26; i++) next[i] = NULL;
    }
}*root;

void insert(string str)
{
    node *curr = root;
    for(int i = 0; i < str.size(); i++)
    {
        int val = str[i] - 'a';
        if(curr->next[val] == NULL)
            curr->next[val] = new node;
        curr = curr->next[val];
        ++curr->cnt;
    }
}

void dfs(node *curr, int lvl)
{
    if(curr->cnt == 1) {
        ans += lvl;
        // cout << lvl << endl;
        return;
    }
    for(int i = 0; i < 26; i++)
    {
        if (curr->next[i]) {
            // cout << i  << " " << curr->next[i]->cnt << endl;
            dfs(curr->next[i], lvl+1);
        }
    }
}

void del(node *cur)
{
    for(int i=0; i<2; i++)
        if(cur->next[i])
            del(cur->next[i]);
    delete(cur);
}

int main()
{
    // freopen("out.txt", "w", stdout);
    int T;
    cin >> T;

    for(int ks = 0; ks < T; ks++) {
        root = new node();
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            insert(s);
        }
        dfs(root, 0);
        del(root);
        cout << ans << "\n";
        ans = 0;
    }
    return 0;
}
