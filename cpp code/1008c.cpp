#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        long long a[2*n],sum=0,l=1;
        
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
         for(int i=2*n-1;i>=0;i--){
            sum=sum + (l*a[i]);
            l=-1*l;
        }
        cout<<sum<<' ';
         for(int i=2*n-1;i>=0;i--){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        
    }
}