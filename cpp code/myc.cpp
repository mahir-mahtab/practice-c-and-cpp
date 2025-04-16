#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[n];
        for(int  i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>sum;
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                x=x+a[i];
            }
            else if(s[i]=='B'&&s[i-1]=='R'){
                sum.push_back(x);
                x=0;
            }
        }
        if(x!=0){
            sum.push_back(x);
        }

        sort(sum.begin(),sum.end());
        if(k>=n){
            cout<<0;
        }
        else {
        cout<<
        }
        }
    }
}