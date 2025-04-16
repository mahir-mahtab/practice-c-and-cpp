#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        for(int i=0;i<s.size();i++){
          
            if(s[i]=='1'){
                if(m['0']==0){
                    cout<<m['1'];
                    break;
                }
                m['0']--;
            }
            else {
                if(m['1']==0){
                    cout<<m['0'];
                    break;
                }
                m['1']--;
            }
        }
        if(m['0']==0&&m['1']==0){
            cout<<0;
        }
        cout<<endl;
    }
}