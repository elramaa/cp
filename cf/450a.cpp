// https://codeforces.com/problemset/problem/450/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    vi a(n + 1);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a[i] = (x + m - 1) / m;
    }
    // pair of index, and it's value
    pair<int, int> best = {0, 0};
    for (int i = 1; i <= n; ++i) {
        if (a[i] >= best.second && i >= best.first) {
            best = {i, a[i]};
        }
    }
    cout << best.first;
    return 0;
}