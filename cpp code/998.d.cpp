#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag =1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=0;
                break;
            }
            else {
                int l=min(a[i],a[i+1]);
                a[i]=a[i]-l;
                a[i+1]=a[i+1]-l;
            }
        }
        if(flag){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
        cout<<endl;
    }
}