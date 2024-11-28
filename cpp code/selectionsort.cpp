#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mark[n];
    for(int i = 0 ; i< n ; i++)cin>>mark[i];
    int index=0;
    for(int i = 0 ; i < n ;i++){
        for(int j = i ; j < n ;j++){
            if(mark[j] < mark [index]){
                index=j;
            }
            
        }
        swap(mark[i],mark[index]);
        index=i+1;
    }
    for(int t = 0 ; t < n ; t++)cout<<mark[t]<<endl;
}