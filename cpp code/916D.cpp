#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;

        // Use long long if values can be large
        vector<pair<long long,int>> a(n), b(n), c(n);

        // Read inputs into vectors
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            a[i] = {x, i};
        }
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            b[i] = {x, i};
        }
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            c[i] = {x, i};
        }

        // Sort descending by the 'first' value
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());

        long long ans = 0;

        // We only need one from each, so we can check the top few (e.g., top 3) 
        // to handle conflicts in indices and still get the maximum sum.
        // This is a small brute force of at most 3*3*3 = 27 checks.
        int limit = min(n, 3); 
        for(int i = 0; i < limit; i++){
            for(int j = 0; j < limit; j++){
                for(int k = 0; k < limit; k++){
                    // Ensure we don't pick the same index from different vectors
                    if(a[i].second != b[j].second && 
                       b[j].second != c[k].second && 
                       a[i].second != c[k].second)
                    {
                        long long currentSum = a[i].first + b[j].first + c[k].first;
                        ans = max(ans, currentSum);
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
