#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseStr(char *str, char *str1);
int main()
{

    char *str = malloc(100 * sizeof(char));
    char *str1 = malloc(100 * sizeof(char));
    printf("Enter a string: ");
    for (int i = 0; i < 100; i++)
    {
        scanf("%c", str + i);
        if (*(str + i) == '\n')
        {
            *(str + i) = '\0';

            break;
        }
    }
    reverseStr(str, str1);
    printf("The string entered is: %s", str1);
    free(str);
    free(str1);
    return 0;
}
void reverseStr(char *str, char *str1)
{
    int length = strlen(str);
    int length1;
    int spaceFlag = 1;
    for (int i = 0, j = 0; i < length; i++)
    {
        if (*(str + i) != ' ')
        {
            *(str1 + j) = *(str + i);
            j++;
            spaceFlag = 0;
        }
        else if (spaceFlag == 0)
        {
            *(str1 + j) = ' ';
            j++;
            spaceFlag = 1;
        }
        if (i == length - 1)
        {
            *(str1 + j) = '\0';
            length1 = j;
        }
    }
    if ((*(str1 + length1 - 1) == ' '))
    {
        *(str1 + length1 - 1) = '\0';
        length1--;
    }
    for (int i = 0; i < length1 / 2; i++)
    {
        char temp = *(str1 + i);
        *(str1 + i) = *(str1 + length1 - i - 1);
        *(str1 + length1 - i - 1) = temp;
    }
    for (int i = 0; i < length1; i++)
    {
        if (*(str1 + i) != ' ')
        {
            int start = i;
            while (i < length1 && *(str1 + i) != ' ')
            {
                i++;
            }
            int end = i - 1;
            while (start < end)
            {
                char temp = *(str1 + start);
                *(str1 + start) = *(str1 + end);
                *(str1 + end) = temp;
                start++;
                end--;
            }
        }
    }
}