#include<bits/stdc++.h>
using namespace std;
bool isPrimeEfficient(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        if(k==1){
            if(isPrimeEfficient(n)){
                cout<<"yes";
            }
            else cout<<"no";
        }
        else {
            if(n==1&&k==2){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }
        }
        cout<<endl;
    }
}