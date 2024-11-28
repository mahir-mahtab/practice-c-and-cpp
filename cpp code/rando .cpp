#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int t = 1;
        vector<char> v;
        if (s.size() == 1)
        {
            v.push_back(rand() % 26 + 'a');
            v.push_back(s[0]);
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (t && i != 0 && (s[i] == s[i - 1]))
                {
                    v.push_back(rand() % 26 + 'a');
                    t = 0;
                }
                v.push_back(s[i]);
            }
            if (t)
            {
                v.push_back(rand() % 26 + 'a');
            }

        }
                    for (int j = 0; j < v.size(); j++)
            {
                cout << v[j];
            }
            
        
        cout<<endl;
    }
}