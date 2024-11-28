#include<stdio.h>
int var = 2;
int main()
{
printf("%i\n", var * var);
int var = 3;
{
int var = 5;
printf("%i\n", var * var);
}
printf("%i\n", var * var);
}