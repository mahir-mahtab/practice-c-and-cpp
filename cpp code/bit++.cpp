#include<iostream>
using namespace std;
int main(){
    int n;
    int x =0;
    cin>>n;
    while(n--){
    char str[3];
    for(int i =0 ; i<3; i++){
        cin>>str[i];
    }
    
    if(str[1] =='+' )x = x++;
    else if(str[1] == '-')x = x--;
    }
    cout<< x ;
}