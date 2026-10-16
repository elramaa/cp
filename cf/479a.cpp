// https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({
        a + b + c,
        (a + b) * c,
        a * (b + c),
        a * b + c,
        a + b * c,
        a * b * c,
    });
    return 0;
}