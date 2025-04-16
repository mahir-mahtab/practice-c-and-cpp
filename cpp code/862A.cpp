#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int Xor=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            Xor=Xor^x;
        }
        if(n%2==1){
            cout<<Xor;
        }
        else if(n%2==0){
            if(Xor==0){
                cout<<1;
            }
            else {
                cout<<-1;

            }
        }
        cout<<endl;
    }
}