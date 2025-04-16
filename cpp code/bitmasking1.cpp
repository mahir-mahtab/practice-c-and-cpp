// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,k;
//     cin>>n>>k;
//     long long l=n,cnt=0,sum=0;
//     map<long long,long long>p;
//     while(l>0){
//         cnt++;
//         l=l/2;
//     }
//     long long i=1;
//     cnt--;
//     while(k--){
//         if(cnt>=0){
//             long long x=pow(2,cnt);
//             p[x]=1;
//             sum=sum^x;
//             cnt--;
//         }
//         else{
//             while(1&i<=n){
                
//                 if(p[i]==0){
//                    sum=sum^i;
//                     i++;
//                     break;

//                 }
//                 i++;
//             }
//         }
      
        
        
//     }
//         cout<<sum<<endl;
    
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
        long long l=n,cnt=0,sum=0;
     while(l>0){
        cnt++;
        l=l/2;
    }
    cnt--;
    if(k!=1){
    sum=((long long)pow(2,cnt))^((long long)pow(2,cnt)-1);
    }
    else{
        sum=n;
    }
    cout<<sum<<endl;


}