#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,k;
        cin>>n>>m>>k;
        int per=(k+n-1)/n;
        if(per<m/2){
            cout<<1;
        }
        else{
            
            int l=1,h=m,ans=0;
                while(l<=h){
                    int mid=(l+h)/2;
                if((m/(mid+1))*mid+(m%(mid+1)) >=per){
                    ans=mid;
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            cout<<ans;
        }
        cout<<endl;
        }
}
