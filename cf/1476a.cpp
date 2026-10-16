// https://codeforces.com/problemset/problem/1476/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll mult = ((n + k - 1) / k) * k;
        ll ans = (mult + n - 1) / n;
        cout << ans << "\n";
    }
    return 0;
}