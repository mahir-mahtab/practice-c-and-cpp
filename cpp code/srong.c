#include<stdio.h>
int fib(int n){
    if(n==1) return 1;
    return n * fib(n-1);
}
int main(){
    int n , sum=0;
    scanf("%d",&n);
    while(n!=0){
        int x = n % 10;
        sum = sum + fib(x);
        n = n /10;

    }
    printf("%d" , sum);
}
//success
