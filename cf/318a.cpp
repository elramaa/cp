// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    ll n, k;
    cin >> n >> k;
    ll oddCount = (n - 1) / 2 + 1;
    if (k <= oddCount) {
        // odd number
        cout << 2 * k - 1;
    } else {
        // even number
        cout << 2 * (k - oddCount);
    }
    return 0;
}