// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    str target = "Timur";
    int t;
    cin >> t;
    while (t--) {
        int n;
        str s;
        cin >> n >> s;
        if (n != 5) {
            cout << "NO\n";
            continue;
        }
        bool correct = true;
        for (char c : target) {
            if (s.find(c) == -1) {
                correct = false;
                break;
            }
        }
        if (correct)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}