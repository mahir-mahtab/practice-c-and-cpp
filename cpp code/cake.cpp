#include<bits/stdc++.h>
using namespace std;

int main(){
    long long tt;
    cin>>tt;
    while(tt--){
    long long k,n,sum=0;
    cin>>n>>k;
    long long cnt=k;
    vector<long long>a;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        a.push_back(x);
        sum=sum+x+x-1;


    }
    sort(a.begin(),a.end());
    sum=sum-a[k-1]-a[k-1]+1;
    cout<<sum<<endl;
    }
}