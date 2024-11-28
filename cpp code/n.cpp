#include<iostream>
#include<stdio.h>
int main()
{
    int i , n , sum=0;
    printf("enter the value of n");
    scanf("%d", &n);
    for(i=2;i<=n;i++)sum = sum + i*i;
    printf("%d",sum);
}