#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

// Renamed function and changed return type to void.
void searchPaths(int x, int y, int a, int b, int c, int d, int l) {
    // Check if current coordinates are invalid.
 

    // Base case: when exactly 4 moves have been made.
    if(l == 4) {
        if(a == c && b == d) {
            cnt++;
        }
        return;
    }
    
    // Recursively try each of the 8 moves.
    searchPaths(x, y, a + x, b + y, c, d, l + 2);
    searchPaths(x, y, a + x, b - y, c, d, l + 2);
    searchPaths(x, y, a - x, b + y, c, d, l + 2);
    searchPaths(x, y, a - x, b - y, c, d, l + 2);
    searchPaths(x, y, a - y, b - x, c, d, l + 2);
    searchPaths(x, y, a + y, b - x, c, d, l + 2);
    searchPaths(x, y, a - y, b + x, c, d, l + 2);
    searchPaths(x, y, a + y, b + x, c, d, l + 2);
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int x, y, a, b, c, d;
        cin >> x >> y >> a >> b >> c >> d;
        cnt = 0; // Reset counter for each test case
        
        // Call the recursive function starting at l = 0.
        searchPaths(x, y, a, b, c, d, 0);
        
        cout << cnt/2 << endl;
    }
    return 0;
}
