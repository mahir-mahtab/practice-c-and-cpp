#include <iostream>
using namespace std;
  
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        int cnt2 = 0, cnt3 = 0;
        long long temp = n;
        while(temp % 3 == 0){
            cnt3++;
            temp /= 3;
        }
        // Count the power of 2
        while(temp % 2 == 0){
            cnt2++;
            temp /= 2;
        }
        // Count the power of 3
        // If there are other factors or too many 2's, it is impossible
        if(temp != 1 || cnt2 > cnt3){
            cout << -1 << "\n";
        } else {
            // Moves: (b - a) multiplications by 2 and b divisions by 6
            cout << (2 * cnt3 - cnt2) << "\n";
        }
    }
    return 0;
}
