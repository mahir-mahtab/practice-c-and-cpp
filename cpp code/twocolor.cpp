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
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        sort(a, a + m);

        for (int i = 0; i < m-1; i++)
        {
            int j=m-1;
            int acc=0;
            while (i < j)
            {
                if (a[i] + a[j] >= n)
                {
                    acc=a[j]+acc;
                    j--;
                }
                else{
                    break;
                }
            }
            acc=acc+((m-j-1)*(a[i]-n+1));
            ans=ans+2*acc;
        }
        cout << ans << endl;
    }
}