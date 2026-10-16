// https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, m;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    vi b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = 0, j = 0; i < n && j < m;) {
        if (abs(a[i] - b[j]) <= 1) {
            ++count;
            ++i;
            ++j;
        } else if (a[i] - b[j] < -1)
            ++i;
        else if (a[i] - b[j] > 1)
            ++j;
    }
    cout << count;
    return 0;
}