// https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x == y) {
            cout << min(b * x, a * (x + y));
        } else {
            cout << min({(x + y) * a, min(x, y) * b + abs(x - y) * a});
        }
        cout << "\n";
    }
    return 0;
}