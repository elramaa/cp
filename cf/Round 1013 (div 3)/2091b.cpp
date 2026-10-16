// https://codeforces.com/contest/2091/problem/B

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
        int n, x;
        cin >> n >> x;
        vi a(n);
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] >= x) count++;
        };
        sort(a.begin(), a.end());

        int end = n - count;  // how many members that not in team yet
        for (int i = 0; i < end;) {
            int members = (x + a[i] - 1) / a[i];
            if (i + members - 1 < end) {
                count++;
                i += members;
            } else {
                i++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}