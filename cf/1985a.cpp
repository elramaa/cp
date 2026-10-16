// https://codeforces.com/problemset/problem/1985/A

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
        str a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b;
        cout << "\n";
    }
    return 0;
}