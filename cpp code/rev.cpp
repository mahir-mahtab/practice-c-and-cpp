#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        char a;
        cin>>a;
        // char b='a'+(a-'a'+25)%26;
        // cout<<b<<endl;
        a-=97;
        a=(a+25)%26;
        a+=97;
        cout<<a<<endl;
    }
}