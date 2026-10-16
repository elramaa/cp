// https://codeforces.com/problemset/problem/327/A

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
    int cnt0, cnt1;
    cnt0 = cnt1 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) cnt0++;
        if (a[i] == 1) cnt1++;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int ones, zeros;
        ones = zeros = 0;
        for (int j = i; j < n; ++j) {
            if (a[j] == 1) ones++;
            if (a[j] == 0) zeros++;
            ans = max(ans, (cnt1 - ones) + (zeros));
        }
    }
    cout << ans;
    return 0;
}