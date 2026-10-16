// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int k, r;
    cin >> k >> r;
    int n = 1;
    for (; n <= 9; n++) {
        if ((k * n) % 10 == r || (k * n) % 10 == 0) break;
    }
    cout << n;
    return 0;
}