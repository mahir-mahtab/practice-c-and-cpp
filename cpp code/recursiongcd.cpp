#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b); int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout<<gcd(a,b);
    return 0;
}
int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;
    else{
        return gcd(b, rem);
    }


}