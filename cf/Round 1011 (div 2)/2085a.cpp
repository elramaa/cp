// https://codeforces.com/contest/2085/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        str s, reversal;
        cin >> s;
        reversal = s;
        reverse(reversal.begin(), reversal.end());

        // Sort using this method: select the lowest and swap it to i-th place
        for (int i = 0; k > 0 && i < s.size(); ++i) {
            int lowest = s[i];
            int lowest_index = i;
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[j] < lowest) {
                    lowest = s[j];
                    lowest_index = j;
                }
            }
            if (lowest == s[i]) {
                continue;
            } else {
                swap(s[i], s[lowest_index]);
                k--;
            }
        }

        if (s < reversal)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}