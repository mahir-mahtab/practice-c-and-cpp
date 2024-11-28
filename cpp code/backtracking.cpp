#include<bits/stdc++.h>
using namespace std;
int back(int n,int arr[],vector<int>&vec,int i){ 
    if(i==n){
        for (auto it:vec)
        {
   
            cout<<it<<" ";
        }
        cout<<endl;
        return 0;
    }

    vec.push_back(arr[i]);
    back(n,arr,vec,i+1);
    vec.pop_back();
    back(n,arr,vec,i+1);

}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }

   int i=0;
   vector<int>vec;
   back(n,arr,vec,i);
   cout<<i;

   
}