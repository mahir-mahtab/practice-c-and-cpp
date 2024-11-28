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
        int a[n], index[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            index[a[i] - 1]++;
        }
        int maxsum = 0;
        for (int i = 0; i < n; i++)
        {
            maxsum = max(maxsum, index[i]);
        }
        cout<<n-maxsum<<endl;
    }
}