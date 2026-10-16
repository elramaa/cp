// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, t;
    cin >> n >> t;
    vi a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }
    int cell = 1;
    while (cell < n) {
        cell += a[cell];
        if (t == cell) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}