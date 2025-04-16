#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        int cl=0,cr=0,j=0,flag=1;
        while(1){
            if(s[j]=='L'){
                cl++;
            }
            else if(s[j]=='R'){
                cr++;
            }
            if(cr==cl){
                break;
            }
            j++;
            if(j==(n)){
                flag=0;
                break;
            }
        }
        int i=0,zero=0;
        while(k--){
            if(s[i]=='L'){
                x--;
            }
            if(s[i]=='R'){
                x++;
            }
            if(x==0){
                zero=1;
                break;
            }
            i++;
            if(i==(n)){
                break;
            }
        }
        if(zero){
            if(flag){
                cout<<1+(k)/(2*cr);
            }
            else{
                cout<<1;
            }
            
        }
        else{
            cout<<0;
        }
        cout<<endl;
    }
}