#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum+x;
        }
        if(sum%n==0&&sum/n==k){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
        cout<<endl;
    }
}