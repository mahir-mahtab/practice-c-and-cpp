#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x,y,z;
        cin>>x>>y>>z;
        z=(z+1)%(x+y);
        if(z==0){
            cout<<"YES";
        }
        else if(z<=x){
            cout<<"NO";
        }
        else {
            cout<<"YES";
        }
        cout<<endl;
    }
}