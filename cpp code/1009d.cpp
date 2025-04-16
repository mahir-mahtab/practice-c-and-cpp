#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,l;
        cin>>n>>l;
        int a[n],r[n];
        map<int,int> m;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
            m[a[i]]=max(m[a[i]],r[i]);
        }
        int sum=0;
        for(auto i:s){
            sum=sum+m[i]*2+1;
        }
        cout<<sum<<endl;
       
    }
}