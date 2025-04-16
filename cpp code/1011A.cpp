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
        int flag=0,c=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                 if(s[i]>s[j]){
                    flag=1;
                    break;
                 }
            }
            c++;
            
            if(flag==1)break;
        }
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
                c--;
            }
            else break;
        }
        if(n==1){
            cout<<"no";
        }
        else if(k==0){
            string q=s;
            reverse(q.begin(),q.end());
            if(s>q){
                cout<<"yes";

            }
            else{
                cout<<"no";
            }
        }
        else if(c<=k){
            cout<<"yes";
            
        }
        else {
            cout<<"no";
        }
        cout<<c;
        cout<<endl;
    }
}