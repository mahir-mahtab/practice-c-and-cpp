#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--){
        string s, l;
        cin >> s >> l;
        int i = 0, j = 0;
        bool valid = true;
        
        while(i < s.size() && j < l.size()){
            char a = s[i];
            char b = l[j];
            int cnt1 = 1, cnt2 = 1;
            
            // Count consecutive characters in s
            while(i < s.size() - 1 && s[i] == s[i+1]){
                cnt1++;
                i++;
            }
            // Count consecutive characters in l
            while(j < l.size() - 1 && l[j] == l[j+1]){
                cnt2++;
                j++;
            }
            
            // Check if the character groups match and if cnt2 is within the allowed range
            if(a != b || cnt2 < cnt1 || cnt2 > 2 * cnt1){
                valid = false;
                break;
            }
            i++;  // Move to next group in s
            j++;  // Move to next group in l
        }
        
        // Check if there are leftover characters in either string
        if(i < s.size() || j < l.size()){
            valid = false;
        }
        
        cout << (valid ? "Yes" : "No") << endl;
    }
    
    return 0;
}
