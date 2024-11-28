#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
     long long a[n];
    for(int i = 0 ; i<n;i++)cin>>a[i];
     long long sum = 0,mAx = 0,ans=0;
    for(int i = 0 ; i<n; i++){
        sum = sum + a[i];
        mAx = max(mAx,a[i]);
        if(sum-mAx==mAx)ans++;
    }
    cout<<ans<<endl;
    }


} // namespace std;
