#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,cnt0=0,maxcnt0=0,cnt1=0,maxcnt1=0;
            int t=1;
        cin>>n;
        for(int i=0;i<n;i++){
            char s;
            cin>>s;
            if(s=='1'){
                cnt1++;
                t=1;
                                   
            }
            else if(s=='0'){
                if(t)cnt0++;
                t=0;
            }

        }
        if(cnt1>cnt0)cout<<"yes";
        else cout<<"no";
            cout<<endl;
    }
}