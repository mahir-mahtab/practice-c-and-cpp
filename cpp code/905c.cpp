#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, ans = INT_MAX;
        cin >> n >> k;
        if (k != 4)
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                if (x % k == 0)
                {
                    ans = 0;
                }
                else
                {
                    ans = min(ans, k - x % k);
                }
            }
            cout << ans << endl;
        }
        else
        {
            int c1 = 0, c2 = 0;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
               if(x%2==0)c1++;
                if (x % k == 0)
                {
                    ans = 0;
                }
                else
                {
                    ans = min(ans, k - x % k);
                }
            }
            if (c1 >= 2)
            {
                cout << 0;
            }
            else if (c1==1)
            {
                cout << min(ans, 1);
            }
            else
            {
                cout << min(2,ans);
            }
        cout << endl;
        }
    }
}