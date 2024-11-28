#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array in non-decreasing order
        sort(a.begin(), a.end());

        // Initialize the maximum k to the smallest possible value
        int max_k = 0;

        // Iterate over the array to find the maximum k
        for (int i = 0; i < n; ++i) {
            // Update max_k if the current element is strictly greater than its index (1-indexed)
            if (a[i] > i + 1) {
                max_k = i + 1;
            }
        }

        // Output the maximum k for the current test case
        cout << max_k << endl;
    }
    return 0;
}
