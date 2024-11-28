#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n , k;
        cin>>n>>k;
        if(n==1)cout<<0;
        else{
            cout<<((n)/k)+1;
        }
        cout<<"\n";
    }
}