// https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, k;
    cin >> n >> k;
    int person = 0;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (x <= 5 - k) ++person;
    }
    cout << person / 3;
    return 0;
}