#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int tt;
    cin >> tt;
    int a = 0, b = 0;
    vector<int> primes;
    for (int i = 2; i <= 1000; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    primes.push_back(1);

    for (int i = 0; i < primes.size(); i++) {
        for (int j = i + 1; j < primes.size(); j++) {
            if (primes[i] + primes[j] == tt) {
                a = max(min(primes[j], primes[i]), a);
                b =max(max(primes[i], primes[j]),b);
            }
        }
    }
    cout << a << " " << b << endl;
}
