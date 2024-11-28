##include <iostream>
#include <vector>
using namespace std;

int min_operations(int n, int k) {
    int operations = 0;
    while (n > 1) {
        if (n <= k) {
            operations += 1;
            break;
        }
        operations += 1;
        n = (n + k - 1) / k;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }
    for (const auto& test_case : test_cases) {
        cout << min_operations(test_case.first, test_case.second) << endl;
    }
    return 0;
}
