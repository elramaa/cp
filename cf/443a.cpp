// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str s;
    getline(cin, s);
    set<char> letters;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            letters.insert(c);
        }
    }
    cout << letters.size();
    return 0;
}