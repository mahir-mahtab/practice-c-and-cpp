#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a1 ,a2 ,b1 ,b2,cnt=0;
        cin>>a1>>a2>>b1>>b2;
        if(a1>b1 && a2>b2){
            cnt=cnt+2;
        }
        if(a2>b1 && a1>b2){
            cnt=cnt+2;
        }
        if(a1==b1 && a2>b2){
            cnt=cnt+2;
        }
        if(a2==b2 && a1>b1){
            cnt=cnt+2;
        }
                
        if(a1==b2 && a2>b1){
            cnt=cnt+2;
        }
        if(a2==b1 && a1>b2){
            cnt=cnt+2;
        }
        cout<<cnt<<endl;

 
        
    }
}