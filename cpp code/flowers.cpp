#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    long long a[n],ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ans=a[n-1];
    for(int i =n-2;i>=0;i--){
        ans=max(max(a[i],ans+1),ans);
    }
    cout<<ans<<endl;
    }
}