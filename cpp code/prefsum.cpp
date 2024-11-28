#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int high , low;
        cin>>high>>low;
        int sum1=0 , mx=0 ,sum=0;
         for(int i=0;i<=high;i++){
            sum=sum+i+low;
         }


        for(int i=0;i<=high;i++){
            sum1 = sum1 + low + i
            mx = max(mx,(sum-sum1));
        }
        cout<<mx<<endl;
    }
}
