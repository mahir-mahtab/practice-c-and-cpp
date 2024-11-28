#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n , k;
        cin>>n>>k;
        k=k-n;
        int ans=1,i=1;
        while(k>0){
            k=k-n+i;
            i++;
            ans=ans+2;
        }
        cout<<ans<<endl;
    }
}