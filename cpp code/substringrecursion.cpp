#include<bits/stdc++.h>
using namespace std;
int coun;
void sub(string s,string res);
int main(){
    string s;
    cin>>s;
    int n=s.length();
    sub(s,"");
    cout<<coun<<endl;
    return 0;
}
void sub(string s,string res){
    coun++;
    int n=s.length();
    if(n==0){
        cout<<res<<endl;
        return;
    }
  
    sub(s.substr(1),res+s[0]);
    
    sub(s.substr(1),res);
}