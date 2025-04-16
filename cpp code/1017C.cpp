#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n+1][n+1];
        vector<int>freq(2*n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<n;i++){
            freq[a[1][i]]=1;
        }
        for(int i=1;i<=n;i++){
            freq[a[n][i]]=1;
        }
        for(int i=1;i<=2*n;i++){
            if(freq[i]==0){
                cout<<i<<' ';
                break;
            }
        }
        for(int i=1;i<n;i++){
            cout<<a[1][i]<<' ';
        }
        for(int i=1;i<=n;i++){
            cout<<a[n][i]<<' ';
        }
        cout<<endl;


    }
}