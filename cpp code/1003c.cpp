#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k, flag = 1;
        cin >> k;
        a[0]=min(a[0],k-a[0]);
        for (int i = 1; i < n; i++)
        {
            if(min(a[i],k-a[i])>=a[i-1]){
                a[i] = min(a[i],k-a[i]);
            }
            else{
                a[i]=max(a[i],k-a[i]);
            }
            
        }
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if(flag==0){
            cout<<"no";

        }
        else{
            cout<<"yes";
        }
        cout<<endl;
    }
}