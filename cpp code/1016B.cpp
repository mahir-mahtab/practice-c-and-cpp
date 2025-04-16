#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string n;
        cin>>n;
        int k=n.size(),cnt0=0,cnt1=0,flag=0;
        for(int i=k-1;i>=0;i--){
            if(n[i]=='0'&&flag==0){
                cnt0++;
            }
            else if(n[i]!='0'&&flag==0){
                flag=1;
            }
            else if(n[i]!='0'&&flag==1){
                cnt1++;
            }
        }

        cout<<cnt1+cnt0<<endl;
    }
}