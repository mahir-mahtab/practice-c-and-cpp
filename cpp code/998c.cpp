#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        map<int,int>f;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }
        long long ans=0;
        for(long long i=0;i<=(k)/2;i++){
            if(i==k-i){
                ans=ans+f[i]/2;
            }
            else{
            ans=ans+min(f[i],f[k-i]);
            }
        }
        cout<<ans<<endl;
    }
}