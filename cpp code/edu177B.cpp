#include<bits/stdc++.h>
using namespace std;

long long sum(int i, int l, int n, vector<long long>& p) {
    long long fullCycles = (l-i) / n;  
    long long remainder = ((l-i) % n);   

    return fullCycles * p[n] + p[remainder];
}

int main() {
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        reverse(a,a+n);
        int l = n * k;
        
        vector<long long> p(n + 1, 0);
        for (long long i = 1; i <=n; i++) {
            p[i] = a[i] + p[i -1];
        }

        long long low = 1, high = l - 1, ans = -1;
        while (low <= high) {
            long long mid = (high + low) / 2;
            if (sum(mid, l, n, p) >= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans +1<< endl;
        // cout<<p[0]<<endl;
    }
}
