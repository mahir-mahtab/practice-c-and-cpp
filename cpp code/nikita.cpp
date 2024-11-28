#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    if(m>n)cout<<"no";
    else if((n-m)%2==0||m==n)cout<<"yes";
    else cout<<"no";
    cout<<endl;
    }

}