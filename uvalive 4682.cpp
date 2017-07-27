#include <bits//stdc++.h>

using namespace std;

struct node
{
    int value;
    node *next[2];
    node()
    {
        value = 0;
        for(int i=0; i<2; i++) next[i] = NULL;
    }
}*root;

void insert(int num)
{
    node *curr = root;
    for(int i=31; i>=0; i--)
    {
        bool val = num & (1<<i);
        if(curr->next[val] == NULL)
            curr->next[val] = new node();
        curr = curr->next[val];
    }
    curr->value = num;
}

int search(int num)
{
    node *curr = root;
    for(int i=31; i>=0; i--)
    {
        bool val = num & (1<<i);
        if(curr->next[1-val] != NULL) curr = curr->next[1-val];
        else if(curr->next[val] != NULL) curr = curr->next[val];
    }
    return (num^curr->value);
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
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;

        root = new node();
        insert(0);
        int prexor = 0, ma = 0;
        for(int  i = 0; i < n; i++) {
            int val;
            cin >> val;
            prexor = prexor ^ val;
            insert(prexor);
            ma = max(ma, search(prexor));
        }
        cout << ma << "\n";
        del(root);
    }
    return 0;
}
