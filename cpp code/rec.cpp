#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string v;
        int x = ((n + 4) / 5), y = n % 5;
        int j = y;
        if (j>0||n%5==0)
        {
            for (int i = 0; i < x; i++)
            {
                v = v + 'a';
                
            }
            j--;
        }
            else
            {
                for (int i = 0; i < x - 1; i++){
                    v = v + 'a';
                }
            }
        
        if (j>0||n%5==0)
        {
            for (int i = 0; i < x; i++)
            {
                v = v + 'e';
                
            }
            j--;
        }           
            else
            {
                for (int i = 0; i < x - 1; i++)
                {
                    v = v + 'e';
                }
            }
        
        if (j>0||n%5==0)
        {
            for (int i = 0; i < x; i++)
            {
                v = v + 'i';
                
            }
            j--;
        }           
            else
            {
                for (int i = 0; i < x - 1; i++)
                {
                    v = v + 'i';
                }
            }
        
        if (j>0||n%5==0)
        {
            for (int i = 0; i < x; i++)
            {
                v = v + 'o';
                
            }
            j--;
        }           
            else
            {
                for (int i = 0; i < x - 1; i++)
                {
                    v = v + 'o';
                }
            }
        
        if (j>0||n%5==0)
        {
            for (int i = 0; i < x; i++)
            {
                v = v + 'u';
                
            }
            j--;
        }           
            else
            {
                for (int i = 0; i < x - 1; i++)
                {
                    v = v + 'u';
                }
            }
        
        cout << v << endl;
    }
}