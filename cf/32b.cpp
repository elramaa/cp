// https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    str s;
    cin >> s;
    for (int i = 0; i < s.size();) {
        if (s[i] == '.') {
            cout << 0;
            ++i;
        } else if (s[i] == '-' && s[i + 1] == '.') {
            cout << 1;
            i += 2;
        } else if (s[i] == '-' && s[i + 1] == '-') {
            cout << 2;
            i += 2;
        }
    }
    return 0;
}