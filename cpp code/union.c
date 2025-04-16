#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void str(char a[],int x){
    int i=0;
    while(x>0){
        a[i]=(x%10)+'0';
        x=x/10;
        i++;
    }
    int r=0,l=i-1;
    while(r<l){
        char temp=a[r];
        a[r]=a[l];
        a[l]=temp;
        r++;
        l--;
    }
    a[i]='\0';
}
int main() {
    int x=523;
    char a[20];
    str(a,x);
    printf("%s",a);
}

