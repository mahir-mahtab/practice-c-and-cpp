#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,t=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])==1){
                t=0;
                break;
            }
        }
        if(t) cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
}