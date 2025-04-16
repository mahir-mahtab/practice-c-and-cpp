#include<bits/stdc++.h>
using namespace std;
int dice(int n,vector<int>a,vector<int>&dp){
    if(n==0) return 1;
    if(n<0)return 0;
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=0;
    for(int i=0;i<6;i++){
        ans=ans+dice(n-a[i],a,dp);
    }
    return dp[n]=ans;
}
int main(){
    int n=30;
    vector<int>a={1,2,3,4,5,6};
    vector<int>dp(n+1,-1);
    cout<<dice(n,a,dp);
    
}