// https://codeforces.com/problemset/problem/124/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n - a;
    ans -= max(0, ans - b - 1);
    if (ans > 0)
        cout << ans;
    else
        cout << 0;
    return 0;
}