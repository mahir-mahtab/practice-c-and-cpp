#include<bits/stdc++.h>
using namespace std;
int merge( vector<int>&a, vector<int>&b, vector<int>&arr){
    int i=0,j=0,k=0;
    while(i!=a.size()&&j!=b.size()){
        if(a[i]>b[j])arr[k++]=b[j++];
        else arr[k++]=a[i++];
    }
    
        while(j<b.size())
            arr[k++]=b[j++];
        
    
        while(i<a.size()) arr[k++]=a[i++];
    

}
void mergesort(vector<int>&v){

 int n = v.size();
    if (n <= 1) return; // Base case: already sorted

    // Divide the array into two halves
    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> a(n1), b(n2);

    // Copy elements into `a` and `b`
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }

    // Recursively sort both halves
    mergesort(a);
    mergesort(b);

    // Merge the two sorted halves
    merge(a, b, v);

}
int main(){
    vector<int>a={1,2,6,10,100,3,32,32323,2323,24567,8,889,9,9};
    mergesort(a);  
    for(auto i : a){
        cout<<i<<' ';
    }
    
}