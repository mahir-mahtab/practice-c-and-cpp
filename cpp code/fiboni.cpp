#include<bits/stdc++.h>
using namespace std;
long long dp[1000000];


long long fib(int n){
    if(n==1 || n==0){
        return 1;
    }
    else if(dp[n]!=0){
        return dp[n];
    }
    else {
        dp[n]= fib(n-1)+fib(n-2);
        return dp[n];
    }
}
int main(){
   int n;
   cin>>n;
  long long x=fib(n);
   cout<<x;
}