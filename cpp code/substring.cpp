#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0, n = s2.length();
        for (int j = 0; j < s1.length(); j++)
        {
            if (i < n && s1[j] != s2[i])
            {
                if (s1[j] == '?')
                {
                    s1[j] = s2[i];
                    i++;
                }
            }

            else if (i < n && (s1[j] == s2[i]))
            {
                i++;
            }
        }
        if (i != n )
        {
            cout << "no" << endl;
        }
        else
        {
            for (int k = 0; k < s1.length(); k++)
            {
                if (s1[k] == '?')
                    s1[k] = 'a';
            }
            cout << "yes" << endl
                 << s1<<endl;
        }
    }
}