// https://codeforces.com/problemset/problem/1950/A

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
        if (a < b && b < c)
            cout << "STAIR";
        else if (a < b && b > c)
            cout << "PEAK";
        else
            cout << "NONE";
        cout << "\n";
    }
    return 0;
}