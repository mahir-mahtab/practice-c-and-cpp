#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&c==d&&d==a){
            cout<<"yes";
        }
    
    else {
        cout<<"no";
    }
    cout<<endl;
}
}