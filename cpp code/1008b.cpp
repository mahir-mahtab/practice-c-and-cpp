#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n==2){
            cout<<"2 1";
        }
        else if(k%2==0){
            for(int i=0;i<n;i++){
                if(i==n-2){
                cout<<n<<' ';
                    
                }
                else{
                cout<<n-1<<' ';
                }
            }
            
        }
        else {
            for(int i=0;i<n-1;i++){
                cout<<n<<' ';
            }
            cout<<n-1;
        }
        cout<<endl;
    }

}