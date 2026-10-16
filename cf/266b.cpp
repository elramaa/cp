// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    while (t--) {
        int i = 0;
        while (i < n - 1) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i += 2;
            } else {
                i++;
            }
        }
    }
    cout << s << "\n";
    return 0;
}