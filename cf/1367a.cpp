// https://codeforces.com/problemset/problem/1367/A

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
        cin >> b;
        cout << b[0];
        for (int i = 1; i < b.size() - 1; i += 2) {
            cout << b[i];
        }
        cout << b[b.size() - 1];
        cout << "\n";
    }
    return 0;
}