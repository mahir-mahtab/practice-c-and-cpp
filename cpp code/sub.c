#include<stdio.h>
#include<string.h>
int main(){
    char a[]={"mahirmahir"};
    char b[]={"ir"};
    int na=strlen(a);
    int nb=strlen(b),count=0;;
    for(int i=0;i<na;i++){
        int k=i;
        for(int j=0;j<nb;j++,k++){
            if(a[k]!=b[j]){
                count--;
                 break;
                 }
        }
        count++;

    }
    printf("%d",count);


}