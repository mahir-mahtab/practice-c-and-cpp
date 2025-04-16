#include <stdio.h>
#include <stdlib.h>
char *myStrncpy(char *dest, char *src, int n);
int main()
{
    char *src, *dest;
    int n;
    src = (char *)malloc(100 * sizeof(char));
    dest = (char *)malloc(100 * sizeof(char));
    if (src == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the source string: ");
    scanf(" %[^\n]", src);
    printf("Enter the number of characters to copy: ");
    scanf("%d", &n);
    myStrncpy(dest, src, n);
    printf("Copied string: %s\n", dest);
    free(src);
    free(dest);
}
char *myStrncpy(char *dest, char *src, int n)
{
    int size;
    for (int i = 0;; i++){
        if (src[i] == '\0')
        {
            size = i;
            break;
        }
    }
    if (n > size){
        for(int i=0;i<size;i++){
            *(dest+i)=*(src+i);
        }
        *(dest+size)='\0';
    }
    else {
        for(int i=0;i<n;i++){
            *(dest+i)=*(src+i);
        }
        *(dest+n)='\0';
    }

}
