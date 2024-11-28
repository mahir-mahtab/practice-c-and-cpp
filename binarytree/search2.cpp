#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, start, end;
    vector<int> a;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int key, mid, index = -1;
    cin >> key;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (end + start) / 2;
        if (a[mid] == key)
        {
            index = mid;
            end = mid - 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
    }
    cout << index << endl;
    start = 0;
    end = n - 1;

    while (start <= end)
    {
        mid = (end + start) / 2;
        if (a[mid] == key)
        {
            index = mid;
            start = mid + 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
    }
    cout << index << endl;
}