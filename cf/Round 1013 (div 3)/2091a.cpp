// https://codeforces.com/contest/2091/problem/A

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
        int digits[10] = {};
        int step = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            digits[x]++;
            if (digits[0] >= 3 && digits[1] >= 1 && digits[3] >= 1 &&
                digits[2] >= 2 && digits[5] >= 1 && step == 0) {
                step = i;
            }
        }
        cout << step << "\n";
    }
    return 0;
}