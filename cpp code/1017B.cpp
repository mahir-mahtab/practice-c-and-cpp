#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int ln=0,rn=0;
        for(int i=0;i<m;i++){
            if(ln>l){
                ln--;
            }
            else{
                rn++;
            }
        }
        cout<<ln<<' '<<rn<<endl;
    }
}