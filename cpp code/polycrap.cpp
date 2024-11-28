#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         long long int n, c1, c2;
        cin >> n;
        if (n % 3 == 0)
        {
            c1 = n / 3;
            c2 = n / 3;
        }
        if (n % 3 == 1)
        {
            c2 = n / 3;
            c1 = c2 + 1;
        }
        if (n % 3 == 2)
        {
            c1 = n / 3;
            c2 = c1 + 1;
        }
        cout << c1 <<" " <<c2<<"\n";
    }
}
