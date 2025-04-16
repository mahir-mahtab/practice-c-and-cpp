#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,max=-100000;
    scanf("%d",&n);
    int *frq=calloc(10001,sizeof(int));
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        *(frq+x)=(*(frq+x))+1;
        if(*(frq+x)>max){
            max=frq[x];
        }
    }
    for(int i=0;i<10001;i++){
        if(*(frq+i)==max){
            printf("%d ",i);
        }
    }
}