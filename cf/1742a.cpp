// https://codeforces.com/problemset/problem/1742/A

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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}