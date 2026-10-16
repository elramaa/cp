// https://codeforces.com/problemset/problem/268/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += (n - i + 1) * i;
    }
    ans -= n * (n - 1) / 2;
    cout << ans;
    return 0;
}