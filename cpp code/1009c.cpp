#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) {
    return (x & (x - 1)) == 0;
}

bool isAllOnes(int x) {
    // x is all ones if and only if x+1 is a power of two.
    return isPowerOfTwo(x + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        // No valid y exists if x is a power of two or x is all ones.
        if(isPowerOfTwo(x) || isAllOnes(x)){
            cout << -1 << "\n";
            continue;
        }
        // Compute the largest power of 2 that does not exceed x.
        int p = 1;
        while(p <= x) {
            p <<= 1;
        }
        p >>= 1;
        // A valid choice is y = p - 1.
        int y = p - 1;
        cout << y << "\n";
    }
    return 0;
}
