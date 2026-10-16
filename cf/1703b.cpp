// https://codeforces.com/problemset/problem/1703/B

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
        vector<bool> letters(26, false);
        int count = 0;
        for (char c : s) {
            if (letters[c - 'A'])
                count++;
            else {
                letters[c - 'A'] = true;
                count += 2;
            }
        }
        cout << count << "\n";
    }
    return 0;
}