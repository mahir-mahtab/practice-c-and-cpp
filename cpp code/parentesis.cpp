#include<bits/stdc++.h>
using namespace std;
void f(int n,int l,int f,string str);
int main(){
    int n;
    cin>>n;
    f(n,0,0,"");

}
void f(int n,int r,int l,string str){
    if(r==n&&l==n){
        cout<<str<<endl;
        return;
    }
    else if(r<l){
        return;
    }
    else if(r>n||l>n){
        return;
    }



    f(n,r+1,l,str+'(');
    f(n,r,l+1,str+')');

}