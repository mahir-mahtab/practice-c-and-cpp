#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k,ans;
        cin>>n>>k;
        if(n%2==0){
            if(k%2==0){
                ans=(n+k-1)/k;
            }
            else {
                ans=(n+k-2)/(k-1);
            }
        }
        else{
            if(k%2==1){
                n=n-k;
                ans=1+(n+k-2)/(k-1);
            }
            else {
                n=n-k+1;
                ans=1+(n+k-1)/k;
            }
        }
        cout<<ans<<endl;

    }
}