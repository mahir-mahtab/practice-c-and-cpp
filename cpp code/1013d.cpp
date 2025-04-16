#include<bits/stdc++.h>
using namespace std;

// Function to find primes up to n using the Sieve of Eratosthenes
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int t;
    cin >> t;

    // Precompute primes up to a reasonable limit using the sieve
    int max_n = 100000;  // Given n can be up to 10^5
    vector<bool> is_prime = sieve(max_n);
    
    while (t--) {
        int n;
        cin >> n;

        // Find a prime number near n/2
        if(n<=3){
            for(int i=1;i<=n;i++){
                cout<<i<<' ';
            }
        }
        else{
        int p = n / 2;
        while (!is_prime[p]) {
            p--;
        }

        // Construct the permutation around the found prime number
        vector<int> perm(n + 1, 0);  // The permutation array (1-indexed)
        perm[p] = 1;
        cout << p << ' ';
        int x=1;

        // Fill the permutation in a manner similar to the pattern you want
        for (int i = 1; i <= n; i++) {
            int t;

            if (i % 2 == 0) {
                t = p - x;
                x++;
            } else {
                t = p + x;
            }

            if (t >= 1 && t <= n && perm[t] == 0) {  // Check bounds and if already filled
                perm[t] = 1;
                cout << t << ' ';
            }
        }

        // Output the remaining unfilled positions in the permutation
        for (int i = 1; i <= n; i++) {

            if (perm[i] == 0) {
                cout << i << " ";
            }
        }
        }
        cout << endl;
    }

    return 0;
}
