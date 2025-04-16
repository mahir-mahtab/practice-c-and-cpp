#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
        string s;
        getline(cin,s);
        vector<char> m;
        m.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]==' '){
                m.push_back(s[i+1]);
            }
        }
        for(auto i:m){
            cout<<i;
        }
        cout<<endl;
    }

}