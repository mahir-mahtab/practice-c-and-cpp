#include<bits/stdc++.h>
using namespace std;
int maze(int srcx,int srcy,int m,int n){
    if(srcx==m&&srcy==n){
        return 1;
    }
    if(srcx>m||srcy>n){
        return 0;
    }
    return maze(srcx,srcy+1,m,n)+maze(srcx+1,srcy,m,n);
}
int main(){
    int x,y,m,n;
    cin>>x>>y>>m>>n;
    int ans=maze(x,y,m,n);
    cout<<ans;

}