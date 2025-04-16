#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int as=0,ans=1;
        int a[n];
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==a[i-1])continue;
            else if(a[i]>a[i-1]){
                if(as!=2){
                    ans++;
                    as=2;
                }
                else as=2;
            }
            else{
                if(as!=1){
                    ans++;
                    as=1;
                }
                else as=1;
            }
        }
        cout<<ans<<endl;
    }
}