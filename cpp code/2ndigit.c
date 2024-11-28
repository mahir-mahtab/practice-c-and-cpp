#include<stdio.h>
int main(){
    int tk;
    float sum=0.0;
    scanf("%d",&tk);
    if(tk>300000){
        sum=sum+300000;
        tk=tk-300000;
    }
    else{
        sum=sum+tk;
        tk=0;       
    }
    if(tk>100000){
        sum=sum+100000*0.95;
        tk=tk-100000;
    }
    else{
        sum=sum+tk*0.95;
        tk=0;       
    }
    if(tk>300000){
        sum=sum+300000*0.9;
        tk=tk-300000;
    }
    else{
        sum=sum+tk*.9;
        tk=0;       
    }
   
    if(tk>400000){
        sum=sum+400000*.85;
        tk=tk-400000;
    }
    else{
        sum=sum+tk*.85;
        tk=0;       
    }
    if(tk>500000){
        sum=sum+500000*.8;
        tk=tk-500000;
    }
    else{
        sum=sum+tk*.8;
        tk=0;       
    }
    sum=sum+tk*.75;
    printf("%.2f",sum);

}