#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
    long long x, y , k;
    cin>>x>>y>>k;
    while(k--){
        x++;
        while(x%y==0){
            x=x/y;
            
        }
        if(x==1)break;
    }
    x=1+k%(y-1);
    cout<<x<<endl;
    }
}


