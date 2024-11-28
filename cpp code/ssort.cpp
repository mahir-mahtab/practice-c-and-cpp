#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int z = n / 5 + n/25;
        cout << z << endl;
    }
}