#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3; // Scores of the three players

        // Calculate the maximum number of draws
        int max_draws = min(p1, p3 - p2) + min(p2, p3 - p1);

        // Check if the scores are consistent
        if (p1 + max_draws != p2 || p2 + max_draws != p3) {
            cout << -1 << endl;
        } else {
            cout << max_draws << endl;
        }
    }

    return 0;
}
