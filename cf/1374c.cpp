// https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        str s;
        cin >> n >> s;
        int moves = 0;
        int left = 0;
        int right = 0;
        for (char c : s) {
            if (c == '(')
                left++;
            else if (c == ')')
                right++;
            if (right > left) {
                moves++;
                right--;
            }
        }
        cout << moves << "\n";
    }
    return 0;
}