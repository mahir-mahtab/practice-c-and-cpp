#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int flag=0;
    while(x++){
        int m=x,f=1;
        int a[11]={0};
        for(int i=0;i<4;i++){
            a[m%10]++;
            m=m/10;
        }
        for(int i=0;i<11;i++){
            if(a[i]>1){
                f=0;
            }
        }
        if(f) break;
    }
    cout<<x;
}