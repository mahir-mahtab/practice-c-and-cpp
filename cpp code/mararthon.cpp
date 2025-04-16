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
        int a[n], b[n], mx = 0;
        vector<int> fa(n + n + 1, 0), fb(n + n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int p = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
                p = i;
            }
        }
        fa[a[n - 1]] = max(fa[a[n - 1]], n - p);
        p = 0;
        for (int i = 1; i < n; i++)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
                p = i;
            }
        }
        fb[b[n - 1]] = max(fb[b[n - 1]], n - p);
        int ans = 0;
        for (int i = 0; i <= 2 * n; i++)
        {
            ans = max(ans, (fa[i] + fb[i]));
        }

        cout << ans << endl;
    }
}