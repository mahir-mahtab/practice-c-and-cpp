#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n , ans=2 ,sum=0 , maxsum=0;
    cin>>n;
    for(int i = 2 ; i <=n ;i++){
        for(int k = 1 ; k*i<=n;k++){
            sum = sum + k*i;
        }
        if(sum>maxsum){
            ans = i;
            maxsum=sum;
        }
        sum=0;
    }
    cout<<ans<<endl;
    }
}