#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
        
        string s;
        cin>>s;
        stack<char>a;
        a.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(a.empty()==1){
                a.push(s[i]);
            }
            else if(a.top()=='A' && s[i]=='B'){
                a.pop();
            }
            else if(a.top()=='B' && s[i]=='B'){
                a.pop();
            }
            else{
                a.push(s[i]);
            }
        }
        int x=a.size();
        cout<<x<<endl;
    }
}