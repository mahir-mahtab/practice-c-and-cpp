#include<bits/stdc++.h>
using namespace std;
pair<char, int> getLowestCharLastIndex(const string &s) {
    char lowestChar = s[0]; // Assume first character is smallest
    int lastIndex = 0;      // Store its last occurrence index

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < lowestChar) {
            lowestChar = s[i]; // Update smallest character
            lastIndex = i;     // Update last index
        } else if (s[i] == lowestChar) {
            lastIndex = i; // Update last index for duplicate occurrences
        }
    }

    return {lowestChar, lastIndex};
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        
        pair<char, int> result = getLowestCharLastIndex(s);
        char temp=s[result.second];
        for(int i=result.second;i>0;i--){
            s[i]=s[i-1];
        }
        s[0]=temp;
        cout<<s<<endl;
        

        }
    }
