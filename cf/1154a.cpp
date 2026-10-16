// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    vi x(4);
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x.begin(), x.end());
    int a, b, c;
    a = (x[0] - x[2] + x[1]) / 2;
    b = (x[0] - a);
    c = (x[1] - a);
    cout << a << " " << b << " " << c;
    return 0;
}