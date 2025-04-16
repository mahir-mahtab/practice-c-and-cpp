#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            long long m=max(a[i],a[i+1]);
            ans= min(ans,m);
        }
        cout<<ans-1<<endl;
    }
}