#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x , y ,m;
    cin>>x>>y;
    int z = y/2;
    if(z!=0){
     m = 15*z - y*4;
    if(m>=x){if(y%2==0)cout<<z<<endl;
    else cout<<z+1<<endl;
    }

    else {
        int mm=(x-m)/15;
        cout<<z+mm+1<<endl;
    }
    }
    else {
        
        if(x==0&&y==0)cout<<0<<endl;
        else{
            if((x)==15)cout<<1<<endl;
            else{
            int k = 1+((x)/15);
            cout<<k<<endl;
            }
        }
    }
    }
}