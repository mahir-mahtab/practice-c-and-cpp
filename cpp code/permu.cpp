#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<=1||x==3){
        cout<<-1;

    }
    else if(x==2){
        cout<<2<<' '<<1;
    }
    else{
        for(int i=x-1;i>0;i--){
            cout<<i<<' ';
        }
        cout<<x<<' ';
    }
}