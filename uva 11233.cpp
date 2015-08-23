#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct check
{
    char singular[100];
    char plural[100];
}a[21];

int main()
{
    int l, n;
    char input[100];
    while(scanf("%d %d", &l, &n) == 2)
    {
        for(int i=0; i<l; i++)
        {
            scanf(" %s %s", a[i].singular, a[i].plural);
        }

    for(int i=0; i<n; i++)
    {
        scanf(" %s", input);
        int flag = 0;
        for(int j=0; j<l; j++)
        {
            if(strcmp(input, a[j].singular)==0){
                printf("%s\n", a[j].plural);
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            int l1 = strlen(input)-1;
            int l2 = l1-1;
            if(input[l1]=='y'&& input[l2]!='a'&&input[l2]!='e'&&input[l2]!='i'&& input[l2]!='o'&& input[l2]!='u')
            {
                input[l1++] = 'i';
                input[l1++] = 'e';
                input[l1++] = 's';
                input[l1] = '\0';
                printf("%s\n", input);
            }

            else if(input[l1]=='o'||input[l1]=='s'||input[l1]=='x'||(input[l1]=='h' && input[l2]=='c') || (input[l1]=='h' && input[l2]=='s'))
                    {
                        l1++;
                        input[l1++] = 'e';
                        input[l1++] = 's';
                        input[l1] = '\0';
                        printf("%s\n", input);
                    }
            else
                {
                    l1++;
                    input[l1++] = 's';
                    input[l1] = '\0';
                    printf("%s\n", input);
                }
        }
    }
    }
    return 0;
}
