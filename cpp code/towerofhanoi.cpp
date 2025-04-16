#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,int start,int end){
    if(n==1){
        cout<<start<<" to "<<end<<endl;
        return;
    }
    int other=6-start-end;
    towerOfHanoi(n-1,start,other);
    cout<<start<<" to "<<end<<endl;
    towerOfHanoi(n-1,other,end);

  
    
}
int main(){
    int n;
    cin>>n;
    towerOfHanoi(n,1,3);
    return 0;
}