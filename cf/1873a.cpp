// https://codeforces.com/problemset/problem/1873/A

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
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}