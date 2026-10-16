// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    while (true) {
        ++y;
        string y_str = to_string(y);
        if (!(y_str[0] == y_str[1] || y_str[0] == y_str[2] ||
              y_str[0] == y_str[3] || y_str[1] == y_str[2] ||
              y_str[1] == y_str[3] || y_str[2] == y_str[3])) {
            cout << y << "\n";
            break;
        }
    }
    return 0;
}