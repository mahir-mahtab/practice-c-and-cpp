#include<stdio.h>
int main()
{
    int mahir[7];
    printf("%d",sizeof(mahir)/sizeof(mahir[0]));
    char c ='m',m = 'j';
    char *c1,**c2;
    c1=&c;
    c2=&c1;
    **c2='c';
    printf("%c,%c", *c1 ,**c2);
}