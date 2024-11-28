#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    vector<int>a;
    for(int i = 0; i<3 ; i++){
        int x;
        cin>>x;
        a.push_back(x);

    }
    sort(a.begin(),a.end());
    if(a[0]==a[1]&&a[1]==a[2]){
        cout<<0<<endl;
    }
    else if(a[0]==a[1]){
        cout<<a[2]-a[1]<<endl;

    }
    else if(a[1]==a[2]){
        cout<<a[1]-a[0]<<endl;
    }
    else{
        cout<<a[2]-a[0]<<endl;
    }
    }
}