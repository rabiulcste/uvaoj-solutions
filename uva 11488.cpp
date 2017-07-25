#include <bits//stdc++.h>
using namespace std;

int ans;
struct node {
    int cnt;
    node *next[2];
    node () {
        cnt = 0;
        for(int i = 0; i < 2; i++) next[i] = NULL;
    }
}*root;

void insert(char *str, int len) {
    node *curr = root;
    for(int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if(curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        ++curr->cnt;
        ans = max(curr->cnt*(i+1), ans);
        // cout << ans << endl;
    }
}


void del(node *cur) {
    for(int i = 0; i < 2; i++) {
        if(cur->next[i])
            del(cur->next[i]);
    }
    delete(cur);
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        root = new node();
        int n;
        scanf("%d", &n);
        ans = 0;
        for(int i = 0; i < n; i++) {
            char str[210];
            scanf(" %s", str);
            insert(str, strlen(str));
        }
        printf("%d\n", ans);
        del(root);
    }
    return 0;
}
