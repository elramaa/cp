// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min({
                k * l / nl,
                c * d,
                p / np,
            }) / n;
    return 0;
}