#include <bits//stdc++.h>
using namespace std;

string s[10010];
bool flag;
struct node {
    bool endmark;
    node *next[10+1];
    node() {
        endmark = false;
        for(int i = 0; i < 10; i++) next[i] = NULL;
    }
}*root;

void insert(string str, int len) {
    node *curr = root;
    for(int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if(curr->next[id] == NULL)
            curr->next[id] = new node;
        if(curr->next[id]->endmark) flag = 1;
        // cout << curr->next[id]->endmark << endl;
        curr = curr->next[id];
    }
    curr->endmark = true;
}

void del(node *cur)
{
    for(int i = 0; i < 10; i++)
        if(cur->next[i])
            del(cur->next[i]);
    delete(cur);
}

int main()
{
    // freopen("out.txt", "w", stdout);
    int T;
    scanf("%d", &T);
    while(T--){
        root = new node();
        int n;
        scanf("%d", &n);
        flag = false;
        for(int i = 0; i < n; i++) {
            char str[12];
            scanf(" %s", str);
            s[i] = str;
        }
        sort(s, s+n);
        for(int i = 0; i < n; i++) {
            insert(s[i], s[i].size());
        }
        del(root);
        if(!flag) puts("YES");
        else puts("NO");
    }
    return 0;
}
