#include<stdio.h>
#include<stdlib.h>
int main(){
    char *s=(char*) malloc(100*sizeof(char));
    s="hello";
    printf("%s\n",s);
    s++;
    printf("%s\n",s);
    s--;
    printf("%s\n",s);
    return 0;
}
