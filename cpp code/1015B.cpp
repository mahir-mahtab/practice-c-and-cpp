#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, flag = 0;
        cin >> n;
        long long a[n], mn = LONG_LONG_MAX; // Initialize mn with the maximum possible value
        vector<long long> gc;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(a[i], mn);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == mn && flag == 0) {
                flag = 1;
            } else if (a[i] % mn == 0) {
                gc.push_back(a[i]);
            }
        }
        sort(gc.begin(), gc.end());

        long long g;
        if (!gc.empty()) {
            g = gc[0];
            for (int i = 1; i < gc.size(); i++) {
                g = gcd(g, gc[i]);
            }
            if (g == mn) {
                cout << "yes";
            } else {
                cout << "no";
            }
        } else {
            cout << "no"; // If gc is empty, all elements were equal to mn, so the condition holds
        }
        cout << endl;
    }
    return 0;
}