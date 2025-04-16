#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
     
        int x=((n/15)*3);
        if(n%15==0){
            x+=1;
        }
        else if(n%15==1){
            x+=2;
        }
        else if(n%15>=2){
            x+=3;
        }
        cout<<x<<endl;
    }
}