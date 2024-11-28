#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    long long n , cnt=0 ,mx=0;
    cin>>n;
    long long a[n];
    cin>>a[0];
    for(int i = 1;i<n;i++){
        cin>>a[i];
        if(a[i-1]>a[i]){
            long long diff=a[i-1]-a[i];
            cnt=cnt+(a[i-1]-a[i]);
            a[i]=a[i-1];
            mx=max(mx,diff);
        
        }
        
    }
    cout<<cnt+mx<<endl;
    }
    
}