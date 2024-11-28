#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        long long ans=0,t=1,sum=1;
        if(k==1){
            ans=n;
        }
        else{
        while((n%sum)/k!=0||t){
        sum=1;
        while((sum*k)<=n){
            sum=k*sum;
        }
        ans=ans+n/sum;
        t=0;
        n=n%sum;
        
        }
        }
        cout<<ans+n%sum<<endl;
}
}