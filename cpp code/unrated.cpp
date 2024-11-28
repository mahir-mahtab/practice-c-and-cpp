#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if((i+1)%2==0){
               sum=sum-a;
            }
            else{
                sum=sum+a;
            }
        }
        cout<<sum<<endl;
    }
}