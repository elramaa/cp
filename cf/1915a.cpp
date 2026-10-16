// https://codeforces.com/problemset/problem/1915/A

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
        if (a == b)
            cout << c;
        else if (a == c)
            cout << b;
        else if (b == c)
            cout << a;
        cout << "\n";
    }
    return 0;
}