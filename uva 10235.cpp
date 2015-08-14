#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <cctype>
#include <map>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <algorithm>
#define ll long long
#define Pi 2*acos(0.0)
#define MAXN 1000010
using namespace std;

char prime[MAXN]={0};
void sieve()
{
    int x = sqrt(MAXN);
    prime[0] = prime[1] = 1;
    for(int i=4; i<MAXN; i+=2){
        prime[i] = 1;
    }
    for(int i=3; i<x; i+=2){
        if(prime[i]==0){
            for(int j=i+i; j<MAXN; j+=i){
                prime[j] = 1;
            }
        }
    }
    return;
}

int main()
{
    int n, temp, q, r;
    sieve();
    while(cin>>n){
    temp = n;
    q = 0;
    while(temp!=0){
        r = temp%10;
        q = q*10 + r;
        temp /= 10;
    }
    if(prime[n]!=0){
        cout<<n<<" is not prime."<<endl;
    }
    else if(prime[n]==0){
        if(prime[q]==0 && n!=q)
            cout<<n<<" is emirp."<<endl;
        else
        cout<<n<<" is prime."<<endl;
    }
    }
    return 0;
}

