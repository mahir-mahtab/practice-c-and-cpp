#include<bits/stdc++.h>
using namespace std;
int rint(int n,int i){
   if(i==n){
      cout<<n<<endl;
      return 0;
   }
   else{
      cout<<i<<endl;
      return rint(n,i+1);
   }

}
int main(){
    int i,n;
    cin>>i>>n;
    rint(n,i);

  
}