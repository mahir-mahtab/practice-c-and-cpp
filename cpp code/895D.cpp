#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
    while (b != 0)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}

// Function to compute LCM using the formula LCM(a, b) = (a * b) / GCD(a, b)
long long LCM(long long a, long long b)
{
    return (a * b) / GCD(a, b);
}
long long sum(long long x){
    return (x*(x+1))/2;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long t=LCM(x,y);
        long long ans=0;
        x=n/x,y=n/y,t=n/t;
        x=x-t;
        y=y-t;
       ans=ans+sum(n)-sum(n-x);
       ans=ans-sum(y);
        cout<<ans<<endl;

        

    }
}