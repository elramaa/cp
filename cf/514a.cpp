// https://codeforces.com/problemset/problem/514/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    str x;
    cin >> x;
    for (int i = 0; i < x.size(); ++i) {
        int c_int = x[i] - '0';
        if (c_int <= 4 || (c_int == 9 && i == 0)) {
            cout << c_int;
            continue;
        };
        cout << 9 - c_int;
    }
    return 0;
}