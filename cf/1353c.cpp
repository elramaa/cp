// https://codeforces.com/problemset/problem/1353/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll moves = 0;
        for (ll i = 1; i <= n / 2; ++i) {
            moves += 8 * i * i;
        }
        cout << moves << "\n";
    }
    return 0;
}