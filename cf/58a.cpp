// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str s;
    cin >> s;
    int hello_count = 0;
    for (char c : s) {
        if (c == 'h' && hello_count == 0) {
            hello_count++;
        } else if (c == 'e' && hello_count == 1) {
            hello_count++;
        } else if (c == 'l' && hello_count == 2) {
            hello_count++;
        } else if (c == 'l' && hello_count == 3) {
            hello_count++;
        } else if (c == 'o' && hello_count == 4) {
            hello_count++;
        }
        if (hello_count == 5) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
