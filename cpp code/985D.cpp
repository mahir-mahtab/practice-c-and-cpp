#include <bits/stdc++.h>
#include <numeric>  // For std::lcm (requires C++17 or later)
using namespace std;

long long sumx(int n, int x)
{
    long long sum = 0;  // Changed to long long
    for (int i = 0; i < x; i++)
    {
        sum += (n - i);
    }
    return sum;
}

long long sumy(int n, int x)
{
    long long sum = 0;  // Changed to long long
    for (int i = 0; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        
        // Check for division by zero.
        if (x == 0 || y == 0) {
            cout << "Error: x and y must be nonzero" << "\n";
            continue;
        }
        
        int m = n / x, l = n / y;
        
        if (x % y == 0)
        {
            m = m - x / y;
            l = l - x / y;
        }
        else if (y % x == 0)
        {
            m = m - y / x;
            l = l - y / x;
        }
        else {
            int lcm_val = std::lcm(x, y);  // lcm of x and y
            if (n / lcm_val != 0) {
                m = m - n / lcm_val;
                l = l - n / lcm_val;
            }
        }
        cout << sumx(n, m) - sumy(n, l) << "\n";
        // For debugging, you could alternatively print m and l:
        // cout << m << " " << l << "\n";
    }
    return 0;
}
