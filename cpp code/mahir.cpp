#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int key = 5, s = 0, e = m - 1;
    while (s < e)
    {
        if (s > e)
        {
            break;
        }

        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            cout << mid;
            break;
        }

        if (a[s] < a[mid])
        {
            if (key<=a[mid && k)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (a[s] > a[mid])
        {
            if (key > a[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
}
