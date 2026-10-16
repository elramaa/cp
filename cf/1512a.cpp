// https://codeforces.com/problemset/problem/1512/A

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
        vi a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] == a[i - 1] && a[i] != a[i + 1]) {
                cout << i + 2;
                break;
            }
            if (a[i] == a[i + 1] && a[i] != a[i - 1]) {
                cout << i;
                break;
            }
            if (a[i - 1] == a[i + 1] && a[i] != a[i - 1]) {
                cout << i + 1;
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}