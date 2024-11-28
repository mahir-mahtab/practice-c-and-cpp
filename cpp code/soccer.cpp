#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if((x1>y1&&x2<y2)||(x1<y1&&x2>y2)){
        cout<<"no";
    }
    else cout<<"yes";
    cout<<endl;
    }
}