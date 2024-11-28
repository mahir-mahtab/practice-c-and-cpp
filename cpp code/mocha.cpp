#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    vector<long long>a;
    int f=0;
    for(int i=0;i<n;i++){
        long long x;
        
        cin>>x;
        a.push_back(x);
        if(x==1){
        f=1;
        }   }
    if(f==1)cout<<"yes";
    else{
    sort(a.begin(),a.end());
    vector<long long>rem;
    for(int i=1;i<n;i++){
        if(a[i]%a[0]!=0){
            rem.push_back(a[i]);
        }
    }
    sort(rem.begin(),rem.end());
    
    n=rem.size();
    int fl=1;
    for(int j=1;j<n;j++){
        if(rem[j]%rem[0]!=0){ fl=0;break;}
        
    }
    if(fl==1)cout<<"yes";
    else cout<<"no";

    }
    cout<<endl;
    }


}