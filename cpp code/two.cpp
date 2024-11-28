#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n,f[3]={1};
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0 ;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        b[i]=x;
    }
    for(int i= 0;i<n-1;i++){
        for(int j = i;j<n;j++){
            if((f[0]==1)&&(a[i]==a[j])){
                b[i]=1;
                b[j]=2;
                f[0]=0;
                break;
            }
            else if((f[1]==1)&&(a[i]==a[j])){
                b[i]=1;
                b[j]=3;
                f[1]=0;
                break;
            }    
            else if((f[2]==1)&&(a[i]==a[j])){
                b[i]=2;
                b[j]=3;
                f[2]=0;
                break;
            }
        
        }

    }
    if(f[2]==0){
        cout<<-1;
    }
    else {
        for(int i = 0;i<n;i++){
            cout<<b[i];
        }
    }
    cout<<endl;
    }



}