#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n], ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k > 1)
        {
            sort(a, a + n);
            for (int i = n - 1; i >= n - k-1; i--)
            {
                ans = ans + a[i];
            }
        }
        else if(n==2){
            ans=a[0]+a[1];
        }
        else
        {
            sort(a + 1, a + n - 1);
            ans = max(max(a[0] + a[n - 2], a[n - 1] + a[n - 2]),a[0]+a[n-1]);
        }
        cout << ans << endl;
    }
}