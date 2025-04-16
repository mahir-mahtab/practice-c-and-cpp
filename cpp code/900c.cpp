#include<bits/stdc++.h>
using namespace std;
long long sum(long long n,long long k){
    long long sum=0;
    for(long long i=n-k+1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k,x;
        cin>>n>>k>>x;
            if( sum(n,k) < x || (k*(k+1))/2 >(x)){
                cout<<"no";
            }
            else {
                cout<<"yes";
            }
            cout<<endl;
    }
}