#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of Dima's friends
    
    int sumFriends = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sumFriends += x;  // Sum of fingers shown by Dima's friends
    }

    int validChoices = 0;
    for (int x = 1; x <= 5; x++) {
        if ((sumFriends + x) % (n + 1) != 1) {
            validChoices++;
        }
    }

    cout << validChoices << endl;
    return 0;
}
