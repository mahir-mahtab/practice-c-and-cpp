#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    string s;
    cin>>s;
    long long pos=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
         if(i!=pos)ans=ans-pos+i+1;
            pos++;
        }
    }
 
    cout<<ans<<endl;
    }

}