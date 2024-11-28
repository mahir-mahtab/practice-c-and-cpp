#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr1, *ptr2;
    ptr1 = (char *)calloc(100, sizeof(char));
    ptr2 = (char *)calloc(100, sizeof(char));
    int k = 0;
    while (1)
    {
        scanf("%c", ptr1 + k);
        if (*(ptr1 + k )== '\n')
        {
            *(ptr1 + k) = '\0';
            break;
        }
        k++;
    }

int strlength = strlen(ptr1);
int allpointers = strlength - 1, count = 0;
for (int i = strlength - 1; i >= 0; i--)
{
    if (*(ptr1 + i) == ' ' && *(ptr1 + i - 1) == ' ')
    {
        
        allpointers--;

        continue;
    }
    if (*(ptr1 + i) == ' '&& allpointers!=i)
    {

        for (int j = i + 1; j <=allpointers; j++)
        {
            *(ptr2 + count) = *(ptr1 + j);
            count++;
        }
        *(ptr2 + count) = ' ';
        count++;
        allpointers = i - 1;
        printf("hi\n");
    }
}
for(int j=0;j<=allpointers;j++){
    if(*(ptr1 + j)==' ')continue;
    *(ptr2 + count) = *(ptr1 + j);
    count++;
}
// *(ptr2 + count) = '\0';
printf("%s", ptr2);
free(ptr1);
free(ptr2);
return 0;
}