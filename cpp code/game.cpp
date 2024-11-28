#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , p , y;
    cin >> n;
    int marks[n]={0};
    cin>>p;
    for(int i =0 ; i<p  ; i++){
        int x;
        cin>>x;
        marks[x-1]=1;
    }
    cin>>y;
        for(int i =0 ; i<y  ; i++){
        int x;
        cin>>x;
        marks[x-1]=1;
    }
//      for(int i = 0 ;i<n;i++){
// cout<<marks[i];}

    for(int i = 0 ;i<n;i++){
        if(marks[i]!=1){cout<<"Oh, my keyboard!";
        return 0;}
    }
    cout<<"I become the guy.";

}