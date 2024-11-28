#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
         cout<<a[n-1]<<' ';
        for(int i=0;i<n-1;i++){
          cout<<a[i]<<' ';
           
        }
       

        cout<<endl;

        
    }
}