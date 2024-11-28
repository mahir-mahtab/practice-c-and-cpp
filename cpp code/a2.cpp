#include <iostream>
using namespace std;

int main() {
    int t,sum = 0,i;
    cin >> t; 
    for( i = 0 ; sum <=t ; i++){
        for (int j = 1 ; j<=i ; j++){sum = sum + j;}
    }
   cout <<i-2;
    return 0;
}

        
    

