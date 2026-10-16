// https://codeforces.com/problemset/problem/1283/A

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
        int h, m;
        cin >> h >> m;
        cout << (23 - h) * 60 + 60 - m << "\n";
    }
    return 0;
}
