#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,t=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])!=5&&abs(a[i]-a[i+1])!=7){
                t=0;
                break;
            
            }
        }
        if(t==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}