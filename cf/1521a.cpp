// https://codeforces.com/problemset/problem/1521/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll x, y, z;
        x = a * b;
        y = a;
        z = x + y;
        if (x == y) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << x << " " << y << " " << z;
            cout << "\n";
        }
    }
    return 0;
}