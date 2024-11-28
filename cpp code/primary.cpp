#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        if(s.size()<3){
            cout<<"no";
        }
        else{
        if(s=="101"){
            cout<<"no";
        }
        else if(s[0]=='1'&&s[1]=='0'&&s[2]!='0'){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        }
        cout<<endl;
    }
}