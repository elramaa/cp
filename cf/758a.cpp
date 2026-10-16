// https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    vi a(n);
    int high = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        high = max(high, a[i]);
    }
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += high - a[i];
    }
    cout << s;
    return 0;
}