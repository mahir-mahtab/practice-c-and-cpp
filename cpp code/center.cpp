#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x , y , k;
        cin>>x>>y>>k;
        for(int i = 0;i<(k/2);i++){
            cout<<(x-(i+1))<<' '<<(y-(i+1))<<endl;
            cout<<(x+(i+1))<<' '<<(y+(i+1))<<endl;
        }
        if(k%2!=0){
            cout<<x<<' '<<y<<endl;
        }
    }
}