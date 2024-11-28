#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0,cnt=0,t=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=k){
                sum=sum+arr[i];
                t=1;
            }
            else if(arr[i]==0&&sum){
                cnt++;
                sum--;
            }
        }
        cout<<cnt
        <<endl;
    }
}