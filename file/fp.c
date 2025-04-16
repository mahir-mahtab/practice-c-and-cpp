#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("mahir.txt","a+");
    if(fp==NULL){
        return 0;
    }
    rewind(fp);
    char str[100];
      
    while(fgets(str,100,fp)){
        printf("%s",str);
    }  
    int 
    // int num;
    // fprintf(fp,"%d",38);
    // rewind(fp);
    // num=getc(fp);
    // printf("%d",num);
    // while(fscanf(fp,"%d",&num)!=EOF){
    //     printf("%d \n",num);
    // }
    fclose(fp);
}