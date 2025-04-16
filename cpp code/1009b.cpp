#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum+x;
        }
        cout<<sum-(n-1)<<endl;
    }
}