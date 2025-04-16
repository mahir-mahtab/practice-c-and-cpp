#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        vector<int> b;
        for(int i=0;i<n;i++){

            int x;
            cin>>x;
            b.push_back(x)   
        }
        sort(b.begin(),b.end());

          vector<int> pairs;
        for (int i = 0; i < n - 1; ++i) {
            if (b[i] == b[i + 1]) {
                pairs.push_back(b[i]);
                ++i; 
            }
        }
        for (int i = 0; i < pairs.size(); i++)
        {
            c<        }
        

            

    }
}