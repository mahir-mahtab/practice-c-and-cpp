#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        if(l==1&&r<n){
            sort(a.begin()+r,a.end());
            sort(a.begin()+l-1,a.end()+r-1);
            int i=l-1,j=r-1;
            while(i<r){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                    i++;
                    j++;
                }
                else if(a[i]<=a[j]){
                    j++;
                }
            }
        }
        for(int i=l-1;i<r;i++){
            cout<<a[l];
        }

    