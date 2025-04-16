#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   (n & (1<<0))?printf("1"):printf("0");
   printf("\n %d",(n & ~(1<<2)));


}