// https://codeforces.com/problemset/problem/1829/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    str codeforces = "codeforces";
    while (t--) {
        str s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < 10; ++i) {
            if (s[i] != codeforces[i]) count++;
        }
        cout << count << "\n";
    }
    return 0;
}