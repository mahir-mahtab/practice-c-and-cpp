#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    char *ptr = malloc(100 * sizeof(char));
    char *ptr2 = malloc(100 * sizeof(char));
    for (int i = 0; i < 50; i++)
    {
        scanf("%c", ptr + i);
        if (*(ptr + i) == '\n')
        {
            *(ptr + i + 1) = '\0';
            n = i;
            break;
        }
    }
    *(ptr2) = *(ptr);
    int count = 1, index = 1;
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) != *(ptr + i - 1))
        {
            *(ptr2 + index) = '0' + count;
            index++;
            *(ptr2 + index) = *(ptr + i);
            index++;
            count = 1;
        }
        else
        {
            count++;
        }
    }

    *(ptr2 + index) = '0' + count;
    index++;
    *(ptr2 + index) = '\0';
    printf("%s", ptr2);

    free(ptr2);
    free(ptr);
    return 0;
}