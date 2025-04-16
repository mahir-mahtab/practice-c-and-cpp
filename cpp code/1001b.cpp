#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        int flag = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=2*max(i,n-i-1)){
                flag=0;
            }
        }
        flag ? cout<<"yes":cout<<"no";
        cout<<endl;

    }
}