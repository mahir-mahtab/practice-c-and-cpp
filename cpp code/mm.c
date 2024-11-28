
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            {
                if (arr1[i] == arr2[j])
                {
                    if ((n - i - 1) > (n - j - 1))
                    {
                        ans = ans + (n - j - 1);
                    }
                    else
                    {
                        ans = ans + (n - i - 1);
                    }
                }
            }
        }
    }
    printf("%d", ans);
}