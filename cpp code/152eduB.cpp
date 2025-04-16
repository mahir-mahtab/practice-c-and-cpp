#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, flag = 0, index, mx = INT_MIN;
        cin >> n >> k;
        vector<pair<long long, int>> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            mx = max(mx, x % k);
            a.push_back({x % k == 0 ? k : x % k, i});
        }
        sort(a.begin(), a.end(), [](const pair<long long, int> &p1, const pair<long long, int> &p2)
             {
                 if (p1.first == p2.first)
                 {
                     return p1.second > p2.second; // If first elements are equal, sort by second in descending order
                 }
                 return p1.first < p2.first; // Otherwise, sort by first in ascending order
             });
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i].second+1 << ' ';
        }
        cout<< endl;
    }
}