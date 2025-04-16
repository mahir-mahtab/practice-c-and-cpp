#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, flag = 1;
    cin >> n >> m;
    int a[n];
    int index = n - 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x - m;
    }
    while (1)
    {
        if (flag == 0)
        {
            break;
        }
        flag=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                index = i;
                flag=1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            a[i]=a[i]-m;
        }
    }
    cout << index + 1 << endl;
}
