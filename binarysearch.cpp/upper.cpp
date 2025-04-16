#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&a,int t){
    int n=a.size();
    int low=0,high=n-1;
    int p;
    while(high>=low){
       int mid=low+(high-low)/2;
       if(a[mid]>t){high=mid-1;
          p=mid;    }
       
       else low=mid+1;

    }
    return a[p];
}
int main(){
    vector<int>a;
    a={1,2,3,3,4,4,4,4,4,5,7,8,9};
    cout<<binary(a,4);

}