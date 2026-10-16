// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str s;
    cin >> s;
    for (int i = 0; i < int(s.size()); ++i) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'y' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'e' || s[i] == 'i') {
            continue;
        } else {
            cout << '.';
            cout << s[i];
        }
    }
    return 0;
}