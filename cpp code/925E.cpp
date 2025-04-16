#include<bits/stdc++.h>
using namespace std;
int countDigit(int x){
    int t=0;
    while(x!=0){
        t++;
        x=x/10;

    }
    return t;

}
int count10(int x){
    int t=0;
    while(x%10==0){
        t++;
        x=x/10;
    }
    return t;
    
    
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,ans=0;
        cin>>n>>m;
        vector<int>tens;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans=ans+countDigit(x);
            int t=count10(x);
            if(t!=0){
                tens.push_back(t);
            }

        }
        sort(tens.begin(),tens.end());
        for(int i=tens.size()-1;i>=0;i=i-2){
            ans=ans-tens[i];
        }


        if(ans>=(m+1)){
            cout<<"Sasha";
        }
        else{
            cout<<"Anna";
        }
        cout<<endl;
    }
}