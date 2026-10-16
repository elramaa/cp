// https://codeforces.com/problemset/problem/1703/A

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
        str s;
        cin >> s;
        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' &&
            tolower(s[2]) == 's') {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}