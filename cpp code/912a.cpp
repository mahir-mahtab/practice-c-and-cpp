#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>a[i];
        }
        if(k>1)cout<<"yes";
        else {
            int flag=1;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1])flag=0;
            }
            flag ? cout << "yes" : cout << "no";

        }
        cout<<endl;
    }
}