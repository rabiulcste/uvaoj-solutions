#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
int length(char w[])
{
    int len=0, c=0;
    
    for(int i=0;w[i]!='\0';i++){
    	len++;
        if(w[i]>=65&&w[i]<=90||w[i]>=97&&w[i]<=122||w[i]==45)
        	continue;
        else
            c++;
        
        len = len - c;
    }
    return len;
}
int main()
{
    char word[150],e[]="E-N-D";
    char out[150];
    int ln=0,mx=0;
    while(scanf("%s",word)!=EOF){
        if(strcmp(word,e)==0){
            for(int i=0;out[i]!='\0';i++){
                if(out[i]>='A'&&out[i]<='Z')
    				printf("%c",out[i]+32);
    			else if(out[i]>='a'&&out[i]<='z'||out[i]=='-')
    				printf("%c",out[i]);
            }
            printf("\n");
        }
        ln=length(word);
        if(ln>mx){
            strcpy(out,word);
            mx=ln;
        }
    }
	return 0;
}
