#include<bits/stdc++.h>
using namespace std;
int func(string a[],int i,int j){
    int f=1;
    for(int k=0;k<i;k++){
        if(a[k][j]=='0')f=0;
    }
    if(f==1)return 0;
    f=1;
     for(int k=0;k<j;k++){
        if(a[i][k]=='0')f=0;
    }
    if(f==0)return 1;
    else return 0;

}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        string a[n];
        for(int i=0;i<n;i++){
           
                cin>>a[i];
            
        }
        int flag=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]=='1'&& func(a,i,j)){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<endl;

    }
}