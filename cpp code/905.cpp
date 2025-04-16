#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        map<char,int> l;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            l[c]++;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(l['a'+i]%2==1){
                cnt++;
            }
        }
        if(cnt-1>k){
            cout<<"no";
        }
        else {
            cout<<"yes";
        }
        cout<<endl;
    }
}