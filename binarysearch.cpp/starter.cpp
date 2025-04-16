#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&a,int t){
    int n=a.size();
    int low=0,high=n-1;
    while(high>=low){
       int mid=low+(high-low)/2;
       if(a[mid]==t)return 1;
       else if(a[mid]>t) high=mid-1;
       else low=mid+1;

    }
    return 0;
}
int main(){
    vector<int>a;
    a={1,2,3,4,5,6,7,8,9};
    cout<<binary(a,21);

}