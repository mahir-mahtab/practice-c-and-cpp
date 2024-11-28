#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j + 1; k < len; k++)
                {
                    str[k - 1] = str[k];
                }
                len--;
                j--;
                str[len] = '\0';
            }
        }
    }
    printf("The modified string is: %s", str);
}