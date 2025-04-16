#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int t = (n * (n - 1)) / 2;
        long long a[t];
        
        for (int i = 0; i < t; i++)  // Fix: Use i instead of t
        {
            cin >> a[i];
        }

        sort(a, a + t);
        vector<long long> ans;
        
        for (int i = 0; i < t; i = i + n)
        {
            ans.push_back(a[i]);
            n--;  // Decrease n after each iteration
        }

        ans.push_back(1000000000);  // Add INT_MAX as the last element

        // Fix: Print all elements up to the correct number
        for (int i = 0; i < ans.size(); i++) 
        {
            cout << ans[i] << ' ';
        }

        cout << endl;
    }
}
