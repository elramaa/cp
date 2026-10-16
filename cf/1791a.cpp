// https://codeforces.com/problemset/problem/1791/A

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
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' ||
            c == 'r' || c == 's')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}