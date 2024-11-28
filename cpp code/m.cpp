#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isStrongPassword(const string& password, int l, int r) {
    if (password.length() < l || password.length() > r) return false;
    bool hasDigit = false;
    bool digits[10] = {false};

    for (int i = 0; i < password.length(); ++i) {
        if (isdigit(password[i])) {
            hasDigit = true;
            int digit = password[i] - '0';
            if (digits[digit]) return false; // Digit appears more than once
            digits[digit] = true;
            if (i > 0 && isdigit(password[i-1])) return false; // Two consecutive digits
        } else if (!islower(password[i])) {
            return false; // Not a lowercase letter
        }
    }
    return hasDigit;
}

int main() {
    int t, n, l, r;
    cin >> t;
    while (t--) {
        cin >> n >> l >> r;
        string password;
        cin >> password;
        cout << (isStrongPassword(password, l, r) ? "YES" : "NO") << endl;
    }
    return 0;
}
