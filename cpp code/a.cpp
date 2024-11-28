#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        
        // Calculate the total distance needed in x and y directions
        int total_distance = abs(x) + abs(y);
        
        // Calculate the minimum number of jumps
        int jumps = (total_distance + k - 1) / k; // Ceiling division
        
        cout << jumps << endl;
    }
    return 0;
}
