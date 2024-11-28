#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long n ,s ,m ,mx;
        cin>>n>>s>>m;
        vector<pair<long , long>>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
        mx=a[0].first;
        for(long long i=1;i<n;i++){
            mx=max(mx,(a[i].first-a[i-1].second));
        }
        mx=max(mx,(m-a[n-1].second));
        if(mx>=s)cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
}