#include<bits/stdc++.h>
using namespace std;
int fibo(vector<int> & dp,int n){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fibo(dp,n-1)+(dp,n-2);
}
int main(){
    int n=100;
    vector<int>dp(n+1,-1);
    dp[0]=0;dp[1]=1;
    int x=fibo(dp,n);
   
    for (auto i : dp) { // Use proper loop syntax for printing
        cout << i << " ";
    }
    cout << "\nFibonacci(" << n << ") = " << x << endl;

    return 0;

}