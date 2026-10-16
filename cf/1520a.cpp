// https://codeforces.com/problemset/problem/1520/A

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
        str s;
        cin >> n >> s;
        bool done[26] = {};
        done[s[0] - 'A'] = true;
        bool sus = false;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                if (done[s[i] - 'A']) {
                    sus = true;
                    break;
                };
                done[s[i] - 'A'] = true;
            }
        }
        if (sus)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}