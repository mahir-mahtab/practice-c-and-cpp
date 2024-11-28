#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x,y,k;
        cin>>x>>y>>k;
        cout<<min(x,k)*min(y,k);
        cout<<endl;
    }
}