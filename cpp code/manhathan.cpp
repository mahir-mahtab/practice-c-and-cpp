#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int m, n, maxsum = 0, row, col;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            string s;
            int cnt = 0, fs = -1;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '#')
                {
                    cnt++;
                    if (fs == -1)
                    {
                        fs = j;
                    }
                }

                if (cnt > maxsum)
                {   
                    maxsum=cnt;
                    row = i + 1;
                    col = fs + (cnt + 1) / 2;
                }
            }
        }
        cout << row << ' ' << col << endl;
    }
}