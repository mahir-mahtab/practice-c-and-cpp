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
        int a[4] = {0};
        for (int i = 0; i < 4 * n; i++)
        {
            char x;
            cin >> x;
            if (x == 'A')
            {
                a[0]++;
            }
            else if (x == 'B')
            {
                a[1]++;
            }
            else if(x=='C'){a[2]++;}
            else if( x=='D'){
                a[3]++;}
        }
        int ans = min(n, a[0]) + min(n, a[1]) + min(n, a[2]) + min(n, a[3]);
        cout << ans << endl;
    }
}