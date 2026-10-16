// https://codeforces.com/problemset/problem/1619/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        str s;
        cin >> s;
        if (s.size() & 1) {
            cout << "NO\n";
            continue;
        }
        if (s.substr(0, s.size() / 2) == s.substr(s.size() / 2, s.size())) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}