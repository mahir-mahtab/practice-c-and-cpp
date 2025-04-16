#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        long long a[n];
        long long  fo=0,fe=0,mx=INT64_MIN,index;
        for(int  i=0;i<n;i++){
            cin>>a[i];
            if(mx<a[i]&&a[i]%2==1){
                mx=a[i];
                index=i;
                fo=1;
            }
            if(a[i]%2==0){
                fe=1;
            }
        }
        if(fo==1&&fe==0){
            cout<<mx;
        }
        else if(fo==0&&fe==1){
            for(int i=0;i<n;i++){
                if(mx<a[i]){
                    mx=a[i];
                }
            }
            cout<<mx;
        }
        else{
            long long ans=mx;
            for(int i=0;i<n;i++){
                if(a[i]%2==1&&index!=i){
                    ans=ans+a[i]-1;
                }
                else if(a[i]%2==0){
                    ans=ans+a[i];
                }
            }
            cout<<ans;
        }
        cout<<endl;
    }
}