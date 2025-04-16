#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s={1,1,1,12,2,22,2,2,3,3,3};
    cout<<s.size()<<endl;
    s.insert(1000);//log2N complexity
    for(auto i:s)cout<<i<<' ';
    s.count(2)//output will be four
    
    s.clear();
}
