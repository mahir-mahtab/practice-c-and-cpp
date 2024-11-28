#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n]={0},t=1;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int z=x-1;
            if(i!=0){
                if(z==0){
                    if(a[z+1]!=1)t=0;
                }
                else if(z==n-1){
                    if(a[z-1]!=1)t=0;
                }
                else{
                    if(a[z+1]!=1&&a[z-1]!=1)t=0;
                }
            }
            a[z]=1;
        }
        if(t){
            cout<<"yes";
        }
        else {cout<<"no";}
        cout<<endl;
        


    }
}