#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int l=1,h=n;
        while(l<=h){
            int mid=(l+h)/2;
            if(mid*mid>n)h=mid-1;
            else l=mid+1;
        }
        cout<<h;
    }
}