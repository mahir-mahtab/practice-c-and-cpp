#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        long a1[n],a2[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a1[i]==-1) continue;
            for(int j=i+1;j<n;j++){
                if(a1[i]==a1[j]){
                    a1[j]=-1;
                }
            }
            c1++;
        }
         for(int i=0;i<n;i++){
            if(a2[i]==-1) continue;
            for(int j=i+1;j<n;j++){
                if(a2[i]==a2[j]){
                    a2[j]=-1;
                }
            }
            c2++;
        }

    if(c1*c2>=3){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    cout<<endl;

    

    }
}