// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    vi a(5);
    for (int i = 1; i <= 4; ++i) cin >> a[i];
    str s;
    cin >> s;
    int ans = 0;
    for (char c : s) {
        if (c == '1') ans += a[1];
        if (c == '2') ans += a[2];
        if (c == '3') ans += a[3];
        if (c == '4') ans += a[4];
    }
    cout << ans;
    return 0;
}