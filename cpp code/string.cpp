#include <iostream>
#include <vector>
using namespace std;

vector<int> generateBeautifulArray(int n) {
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        array[i] = (i + 1) * (i + 1);  // Use square numbers to ensure the divisibility
    }
    return array;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> result = generateBeautifulArray(n);
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
