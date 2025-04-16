#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&a,int t){
    int n=a.size();
    int low=0,high=n-1;
    int p;
    while(high>=low){
       int mid=low+(high-low)/2;
       if(a[mid]<=t){low=mid+1;
          p=mid;    }
       
       else high=mid-1;

    }
    return p;
}
int main(){
    vector<int>a;
    a={1,2,3,3,4,4,4,4,4,5,7,8,9};
    cout<<binary(a,4);//last occurance....1st is same as lower bound

}