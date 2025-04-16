#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int  even=0,odd=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(i%2==0)even++;
                else odd++;
            }
            if(b[i]=='0'){
                if(i%2==0)odd--;
                else even--;
            }
        }
        if(even<=0&&odd<=0){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<endl;
    }

}