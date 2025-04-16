#include<bits/stdc++.h>
using namespace std;
// int binary(vector<int>&a){
//     int n=a.size();
//     int low=0,high=n-1;
//     int mid,ans;
//     while(high>=low){
//        mid=low+(high-low)/2;
//        if(a[mid]>a[mid+1]&&a[mid]>a[mid-1]) {
//         ans=mid;
//         break;
//        }
//        else if(a[mid]<a[mid+1])low=mid+1;
//        else high=mid-1;
//     }
//     return a[ans];
// }
int binary(vector<int>&a){
    int n=a.size();
    int low=0,high=n-1;
    int mid,ans;
    int t=100;
    while(high>=low){
        mid=((high+low)/2);
        if(a[mid]==t)return mid;
        else if(a[mid]<a[high]){
            if(a[mid]<t && t<a[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(a[mid]>t && t>a[low]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
}
int main(){
    vector<int>a;
    a={200,400,500,550,350,100};
    cout<<binary(a);

}