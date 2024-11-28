#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,start,end;
    vector<int>a;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int key,mid;
    cin>>key;
    start=0;
    end=n-1;
    while(start<=end){
        mid=(end+start)/2;
        if(a[mid]==key){
            cout<<key<<"is in index"<<mid;
            break;
        }
        else if(a[mid]<key){
            end=mid-1;
        }
        else if(a[mid]>key){
            start=mid+1;
        }

        
    }
}