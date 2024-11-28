#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,ans=0;
        cin>>n>>k;
        vector<int> a(k,0);

        for(int i=0;i<k;i++){
            int x,y;
            cin>>x>>y;
            a[x-1]=a[x-1]+y;

            
        }
        sort(a.begin(),a.end());e
        for(int i=0;i<min(k,n);i++){
            ans=a[k-1-i]+ans;
        }
        cout<<ans<<endl;
    }
}