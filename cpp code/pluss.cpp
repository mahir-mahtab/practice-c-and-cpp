#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum1=sum1+x;
        
        cin>>x;
        sum2=sum2+x;
        
        cin>>x;
        sum3=sum3+x;
    }
    if(sum1==0&&sum2==0&&sum3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}