#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long i=1,flag=0;
        while(1){
            i=i*2;
            long long  v=a[0]%i;
            for(int j=0;j<n;j++){
                if(a[j]%i!=v){
                    flag=1;
                    break;
                }
            }
            if(flag){
                cout<<i<<endl;;
                break;
            }
        }
    }
}