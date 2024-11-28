#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        int x,y;
        cin>>n;
        cin>>x>>y;
        int mx=min(x,y);
        cout<<(n+mx-1)/mx<<endl;
    }
}