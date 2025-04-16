#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,count=0,flag=-1;
        cin>>n;
        int s=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2!=0){
                count++;
            }
            
            if(x%2==0){
                flag=1;
            }
           
        }
        cout<<count+flag<<endl;
    }
}