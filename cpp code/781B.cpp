#include<bits/stdc++.h>
using namespace std;
long long mostFrequent(const vector<long long> &arr) {
    unordered_map<long long, int> freq_map;
    long long res;
    int maxcount = 0;

    // Count frequencies of elements
    for (const auto &num : arr) {
        freq_map[num]++;
        if (freq_map[num] > maxcount) {
            maxcount = freq_map[num];
            res = num;
        }
    }

    return maxcount; // Return the most frequent element
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<long long> a;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            a.push_back(x);
        }
        int k=mostFrequent(a);
        // cout<<k<<endl;
        int l=n-k,m=k,c=0;;
        while(l>0){
            l=l-m;
            m=m*2;
            c++;
        }
        cout<<n-k+c<<endl;

    }
}