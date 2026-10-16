// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    ll n, m, a;
    cin >> n >> m >> a;
    // cout << (n / a) * ceil(m / a);
    cout << ll(ceil(n / (double)a)) * ll(ceil(m / (double)a));
    return 0;
}