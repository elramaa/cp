// https://codeforces.com/problemset/problem/1791/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        str s;
        cin >> n >> s;

        map<char, int> right;
        for (char c : s) {
            if (right.count(c)) {
                right[c]++;
            } else {
                right[c] = 1;
            }
        }

        int ans = 0;
        set<char> left;
        for (char c : s) {
            left.insert(c);
            right[c]--;
            if (right[c] == 0) {
                right.erase(c);
            }
            ans = max(ans, int(left.size() + right.size()));
        }
        cout << ans << "\n";
    }
    return 0;
}