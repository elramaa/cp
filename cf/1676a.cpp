// https://codeforces.com/problemset/problem/1676/A

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
        str n;
        cin >> n;
        if (int(n[0]) + int(n[1]) + int(n[2]) ==
            int(n[3]) + int(n[4]) + int(n[5]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}