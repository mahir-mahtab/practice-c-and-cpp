#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int x , y;
    cin>>x>>y;
    if(y>=0){
        if((abs(x)>=abs(y-abs(x)))||(abs(x)<=y))cout<<"YES";
        else cout<<"NO";
    }
    if(y<0){
        if(y==-1) cout<<"YES";
        else cout<<"NO";
    }
    cout<<endl;
    }
}