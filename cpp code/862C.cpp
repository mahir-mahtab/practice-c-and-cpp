#include <bits/stdc++.h>
using namespace std;

struct para {
    long long a;
    long long b;
    long long c;
};

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        long long k[n];
        struct para p[m];

        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> p[i].a >> p[i].b >> p[i].c;
        }

        for (int i = 0; i < m; i++) {
            int flag = 0;
            for (int j = 0; j < n; j++) {
                if ((p[i].b - k[j]) * (p[i].b - k[j]) < 4 * p[i].a * p[i].c) {
                    flag = 1;
                    cout << "YES" << endl << k[j] << endl;
                    break;
                }
            }
            if (flag == 0) {
                cout << "no" << endl;
            }
        }
    }
}
