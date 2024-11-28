
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,sum=0,cnt=0;;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    sort(a[0],a[n-1]);
    for(int j = 0 ; j < n-1 ; j++){
        for(int i = 0 ; i <= j; i++){
            sum=sum + a[i];
        }
        if(sum==a[j+1])cnt++;
        sum=0;
    }
    cout<<cnt;
}