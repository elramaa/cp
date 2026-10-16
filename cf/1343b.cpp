// https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 == 0) {
            cout << "YES\n";
            for (int i = 1; i <= n / 2; ++i) {
                cout << i * 2 << " ";
            }
            for (int i = 1; i < n / 2; ++i) {
                cout << i * 2 - 1 << " ";
            }
            cout << 3 * (n / 2) - 1 << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}