#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
    long long n , l ,r ,sum = 0,cnt=0;
     cin>> n >> l >> r;
     for(long long i = 0 ; i < n ; i++){
        long long x ;
        cin>>x;
        if(x<=r&&x>=l){cnt++;
        sum=0;}
        else if(x>r)sum=0;

        else if(x<l){
            sum=sum+x;
            if(sum>=l&&sum<=r){
                cnt++;
                sum=0;
            }
            else if(sum>r){
                sum = 0;
            }
        }
     }

     cout<<cnt<<endl;
    }

}