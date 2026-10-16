// https://codeforces.com/problemset/problem/148/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int out = 0;
    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) out++;
    }
    cout << out;
    return 0;
}