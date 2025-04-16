#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, ans = 0;
        cin >> n;
        int s, t;
        if (n <= 2)
        {
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
            }
            cout << 0 << endl;
        }
        else
        {
            s=INT_MAX;
            t=INT_MAX;
            
            for (int i = 0; i < n; i++)
            {
                
                int x;
                cin >> x;
                

                 if (x > max(s, t))
                {
                    if (s <= t)
                    {
                        s = x;
                    }
                    else
                    {
                        t = x;
                    }
                    ans++;
                }
                else if (x < min(s, t))
                {
                    if (s <= t)
                    {
                        s = x;
                    }
                    else
                    {
                        t = x;
                    }
                }
                else
                {
                    if (s >= x)
                    {
                        s = x;
                    }
                    else
                    {
                        t = x;
                    }
                }
            }

            cout << ans << endl;
        }
    }
}