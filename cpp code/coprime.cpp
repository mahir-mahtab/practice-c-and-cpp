#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x,y;
        cin>>x>>y;
        if(x==1&&y==1){
            cout<<1<<endl;
        }
        else if(x==1){
            cout<<(y-x)<<endl;
        }
        else{
            cout<<y-x<<endl;
        }
    }
}