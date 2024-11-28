#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<4;j++){
                if(s[j]=='#'){

                    a.push_back(j+1);
                }
            }

        }
        for(int i=a.size()-1;i>=0;i--){
            cout<<a[i]<<' ';
        
        }
        cout<<endl;    }
}