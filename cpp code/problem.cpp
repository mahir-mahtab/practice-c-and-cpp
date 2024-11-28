#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int m,n;
    int arr[7]={0};
    int count=0;
    cin>>n>>m;
    for(int i=0 ; i < m ; i++){
        char x;
        cin>>x;
        arr[x-'A']++;
        cout<<x-'A';

    }
    for(int i=0 ; i < 7 ; i++){
        if(arr[i]<=n)count++;

    }
    cout<<count;
}
}