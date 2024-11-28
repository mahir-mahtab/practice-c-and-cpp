#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n],ans=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j=j+2){
            ans=max(ans,a[j]);
        }
        cout<<ans<<endl;

    }
}