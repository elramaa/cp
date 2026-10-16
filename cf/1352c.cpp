// https://codeforces.com/problemset/problem/1352/C

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
        ll n, k;
        cin >> n >> k;
        ll x = (k - 1) / (n - 1);
        cout << x * n + (k - x * (n - 1)) << "\n";
    }
    return 0;
}