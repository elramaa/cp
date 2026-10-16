// https://codeforces.com/problemset/problem/1899/A

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
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    return 0;
}