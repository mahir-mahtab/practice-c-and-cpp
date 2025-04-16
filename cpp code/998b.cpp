#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            sort(a[i], a[i] + m);
        }
        int flag = 1;
        if (m == 1)
        {
            flag = 0;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    if (a[i][j + 1] - a[i][j] == n)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[j][0] == i)
                        cout << j + 1 << ' ';
                }
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
}