// https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    str guest, host, letters;
    cin >> guest >> host >> letters;
    vc correct_char(26, 0), letters_char(26, 0);
    for (char c : guest) {
        correct_char[c - 'A']++;
    }
    for (char c : host) {
        correct_char[c - 'A']++;
    }
    for (char c : letters) {
        letters_char[c - 'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (correct_char[i] != letters_char[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}