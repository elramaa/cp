// https://codeforces.com/problemset/problem/1857/A

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
        int n;
        cin >> n;
        int odds = 0;
        while (n--) {
            int x;
            cin >> x;
            if (x & 1) odds++;
        }
        if (odds & 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}