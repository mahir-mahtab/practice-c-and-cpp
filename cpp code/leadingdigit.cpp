#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,flag=0,ans=0;
        cin>>n;
        int m[10]={0};
        m[0]=3,m[2]=2,m[3]=1,m[1]=1,m[5]=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]=max(0,--m[x]);
            if(flag==0&&m[0]==0&&m[2]==0&&m[3]==0&&m[1]==0&&m[5]==0){
                flag=1;
                ans=i+1;
            }

        }
        cout<<ans<<endl;
    }
}