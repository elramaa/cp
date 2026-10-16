// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str p;
    cin >> p;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}