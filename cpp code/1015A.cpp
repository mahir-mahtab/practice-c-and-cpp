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
            cout<<n<<' ';
            for(int i=1;i<n;i++){
                cout<<i<<' ';
            }

        }
        cout<<endl;
    }
}