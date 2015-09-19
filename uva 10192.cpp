#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 105
char A[MAX], B[MAX];
int dp[MAX][MAX];
bool visited[MAX][MAX];
int lenA, lenB;

int calcLCS(int i, int j)
{
    if(A[i] == '\0' || B[j] == '\0') return 0;
    if(visited[i][j]) return dp[i][j];
    int ans = 0;
    if(A[i] == B[j]) ans = 1 + calcLCS(i+1, j+1);
    else
    {
        int val1 = calcLCS(i+1, j);
        int val2 = calcLCS(i, j+1);
        ans = max(val1, val2);
    }
    visited[i][j] = 1;
    dp[i][j] = ans;
    return dp[i][j];
}

int main()
{
    int kases = 0;
    while(gets(A)){
        lenA = strlen(A);
        if(A[0] == '#' && lenA == 1) {
                break;
        }
        gets(B);
        lenB = strlen(B);
        memset(visited, 0, sizeof(visited));
        printf("Case #%d: you can visit at most %d cities.\n", ++kases, calcLCS(0, 0));
    }
     return 0;
}
