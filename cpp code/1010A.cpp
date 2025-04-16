#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        map<int,int> index;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string k;
            cin >> k;
            s.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            int cnt1 = 0;
            for (int j = 0; j < m; j++)
            {
                s[i][j] == '1' ? cnt1++ : cnt1;
            }
            if (cnt1 % 2 == 1)
            {
                ans++;
                index[i] = 1;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int cnt1 = 0;
            for (int j = 0; j < n; j++)
            {
                s[j][i] == '1' ? cnt1++ : cnt1;
            }
            if (cnt1 % 2 == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (index[j] == 1 && s[j][i] == '0')
                    {
                        index[j] = 0;
                        ans--;
                        break;
                    }
                }
                ans++;
            }
        }
        cout << ans << endl;
    }
}