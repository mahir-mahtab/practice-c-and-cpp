#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=n/1000;
    int mx=0,mx2=0;
    if(a>mx){
        mx2=mx;
        mx=a;
    }
    else if(a>mx2 && a<mx){
        mx2=a;
    }
        if(b>mx){
        mx2=mx;
        mx=b;
    }
    else if(b>mx2 && b<mx){
        mx2=b;
    }
        if(c>mx){
        mx2=mx;
        mx=c;
    }
    else if(c>mx2 && c<mx){
        mx2=c;
    }
        if(d>mx){
        mx2=mx;
        mx=d;
    }
    else if(d>mx2 && d<mx){
        mx2=d;
    }

printf("%d",mx2);

}