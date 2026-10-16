// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    vi x(3);
    for (int i = 0; i < 3; ++i) cin >> x[i];
    sort(x.begin(), x.end());
    cout << (x[1] - x[0]) + (x[2] - x[1]);
    return 0;
}