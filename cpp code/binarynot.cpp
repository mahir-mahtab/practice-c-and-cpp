#include <bits/stdc++.h>
using namespace std;
int noot(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    int lenght = pow(2, n - 1);
    if (k <= lenght / 2)
    {
        return noot(n - 1, k);
    }
    else
    {
        return 1 - noot(n - 1, k - lenght / 2);
    }
}
int main()
{
    int tt;
    cin >> tt;
    int n, k;
    cin >> n >> k;
    cout << noot(n, k) << endl;
}