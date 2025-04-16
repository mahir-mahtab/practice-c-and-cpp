#include <iostream>
#include <vector>

using namespace std;

bool isNonDecreasing(const vector<long long> &a)
{
    for (size_t i = 1; i < a.size(); ++i)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (isNonDecreasing(a))
        {
            cout << 0 << endl;
        }
        else
        {
            if (a[n - 1] < a[n - 2])
            {
                cout << -1 << endl;
            }
            else if (a[n - 1] == a[n - 2])
            {
                if (a[n - 2] < 0)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << n - 2 << endl;
                    for (int i = 1; i <= n - 2; i++)
                    {
                        cout << i << ' ' << n-1 << ' ' << n  << endl;
                    }
                }
            }
            else
            {
                if (a[n - 1] < 0)
                {
                    if (abs(a[n - 1] - a[n - 2]) > abs(a[n - 2]))
                    {
                        cout << n - 2 << endl;
                        for (int i = 1; i <= n - 2; i++)
                        {
                            cout << i << ' ' << n - 1 << ' ' << n << endl;
                        }
                    }
                    else
                    {
                        cout << -1 << endl;
                    }
                }
                else
                {
                    cout << n - 2 << endl;
                    for (int i = 1; i <= n - 2; i++)
                    {
                        cout << i << ' ' << n - 1 << ' ' << n << endl;
                    }
                }
            }
        }
       
    }
}