#include<bits/stdc++.h>
using namespace std;
int main(){
    long tt;
    cin>>tt;
    while(tt--){
        long a,b,k;
        cin>>a>>b>>k;

        if(a==0&&b==0){
            cout<<0;
        }
        else if(a<k&&b<k){
            cout<<2;
        }
        else if(a>b){
            long sum=2*((a+k-1)/k)-1;
            cout<<sum;
        }
        else if(a==b){
            cout<<((a+k-1)/k);
        }
        else {
            long  sum1 = 2*((b+k-1)/k);
            cout<<sum1;
        }
        cout<<endl;


    }

}