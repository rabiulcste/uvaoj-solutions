#include <bits//stdc++.h>
using namespace std;
 
int main(){
    int t, n, a, b;
 
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        char num1[1000010], num2[1000010];
        string sum = "";
        for(int i=0; i<n; i++) {
            scanf(" %c %c", &num1[i], &num2[i]);
            //cout << num1  << " " << num2 <<endl;
        }
        int temp = 0;
        for(int i = n-1; i >= 0; i--) {
            temp = temp + (num1[i]-'0') + (num2[i]-'0');
            sum += (temp%10) + '0';
            temp/=10;
        }
        if(temp) sum += temp + '0';
        reverse(sum.begin(), sum.end());
        cout << sum << endl;
        if(t) cout << endl;
    }
    return 0;
}
