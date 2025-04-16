#include<bits/stdc++.h>
using namespace std;
vector<int> getdigit(int n){
    vector<int>a;
    while(n){
        if(n%10!=0){
        a.push_back(n%10);
        }
        n=n/10;
    }
    return a;
}
int digitsum(int n,vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(n<=9){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
   vector<int>digit= getdigit(n);
   int k=INT_MAX;
   for(int i=0;i<digit.size();i++){
    k=min(k,digitsum((n-digit[i]),dp));
   }
    return dp[n]=1+k;
}
int main(){ 
    int n=1728723;
    vector<int>dp(n+1,-1);
    cout<<digitsum(n,dp);
}