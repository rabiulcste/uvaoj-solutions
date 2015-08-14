#include <iostream>
#include <list>
#include <cstring>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <stack>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <iomanip>
#include <queue>

using namespace std;
char ch, last;
bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return true;
    return false;
}
int main()
{

    while(scanf("%c", &ch)==1){
        if(isalpha(ch)){
            if(isvowel(ch)){
                while(isalpha(ch)){
                    cout<<ch;
                    scanf("%c", &ch);
                }
                cout<<"ay";
            }
            else{
                last = ch;
                ch = getchar();
                while(isalpha(ch)){
                    cout<<ch;
                    scanf("%c", &ch);
                }
                cout<<last<<"ay";
            }
        }
        cout<<ch;
    }
    return 0;
}
