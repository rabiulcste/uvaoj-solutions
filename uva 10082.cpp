#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string n;
    int i, l;
    while(getline(cin, n))
        {
            l=n.length();
            for(i=0; i<l; i++){
        if(n[i]=='e'||n[i]=='E') printf("q");
        else if(n[i]=='r'||n[i]=='R') printf("w");
        else if(n[i]=='t'||n[i]=='T') printf("e");
        else if(n[i]=='y'||n[i]=='Y') printf("r");
        else if(n[i]=='u'||n[i]=='U') printf("t");
        else if(n[i]=='i'||n[i]=='I') printf("y");
        else if(n[i]=='o'||n[i]=='O') printf("u");
        else if(n[i]=='p'||n[i]=='P') printf("i");
        else if(n[i]=='['||n[i]=='{') printf("o");
        else if(n[i]==']'||n[i]=='}') printf("p");
        else if(n[i]=='d'||n[i]=='D') printf("a");
        else if(n[i]=='f'||n[i]=='F') printf("s");
        else if(n[i]=='g'||n[i]=='G') printf("d");
        else if(n[i]=='h'||n[i]=='H') printf("f");
        else if(n[i]=='j'||n[i]=='J') printf("g");
        else if(n[i]=='k'||n[i]=='K') printf("h");
        else if(n[i]=='l'||n[i]=='L') printf("j");
        else if(n[i]==';') printf("k");
        else if(n[i]==39) printf("l");
        else if(n[i]=='c'||n[i]=='C') printf("z");
        else if(n[i]=='v'||n[i]=='V') printf("x");
        else if(n[i]=='b'||n[i]=='B') printf("c");
        else if(n[i]=='n'||n[i]=='N') printf("v");
        else if(n[i]=='m'||n[i]=='M') printf("b");
        else if(n[i]==',') printf("n");
        else if(n[i]=='.') printf("m");
        else if(n[i]=='x'||n[i]=='X') printf(".");
        else if(n[i]=='S'||n[i]=='s') printf("'");
        else if(n[i]=='W'||n[i]=='w') printf(")");
        else if(n[i]==' ') printf(" ");
        }
        printf("\n");
    }
return 0;
}
