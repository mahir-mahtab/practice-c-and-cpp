#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b){
        if((a>c||a>d)&&(b<c||b<d))cout<<"YES";
        else cout<<"NO";
    }
    if(b>a){
         if((b>c||b>d)&&(a<c||a<d))cout<<"YES";
        else cout<<"NO";
    }
    cout<<"\n";
    }
}