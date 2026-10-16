// https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int min_cost = INT32_MAX;
    for (int i = 0; i * m <= n; ++i) {
        min_cost = min(min_cost, b * i + a * (n - i * m));
    }
    min_cost = min(min_cost, b * ((n + m - 1) / m));
    cout << min_cost;
    return 0;
}