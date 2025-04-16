#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;

    while(tt--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1;
        }
        else{
        cout<<1<<' ';
        for(int i=1;i<=(n-1)/2;i++){
            cout<<i*2+1<<' ';
        }
        for(int i=1;i<=(n-1)/2;i++){
            cout<<i*2<<' ';
        }

        }
        cout<<endl;
    }
}