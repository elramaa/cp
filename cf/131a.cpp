// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str s;
    cin >> s;
    // if all letters was uppercase, transform into lowercase
    // if first letter was lowercase and the rest was uppercase, switch case
    // (upper to lower, lower to upper)
    bool first_lower = islower(s[0]);
    int lower_count = 0;
    int upper_count = 0;
    for (char c : s) {
        if (islower(c)) {
            lower_count++;
        } else if (isupper(c)) {
            upper_count++;
        }
    }
    // if all the letters was uppercase
    if (upper_count == int(s.size())) {
        for (int i = 0; i < int(s.size()); ++i) {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    } else if (first_lower && upper_count == int(s.size()) - 1) {
        // if first letter was lowercase and the rest was uppercase, switch case
        // (upper to lower, lower to upper)
        s[0] = toupper(s[0]);
        cout << s[0];
        for (int i = 1; i < int(s.size()); ++i) {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    } else {
        cout << s;
    }
    return 0;
}