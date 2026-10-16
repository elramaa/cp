// https://codeforces.com/problemset/problem/1433/A

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
        int x;
        cin >> x;
        str str_x = to_string(x);
        int count = 0;
        for (int i = 1; i <= ((x % 10) - 1) * 4 + str_x.size(); ++i) {
            if (i % 4 == 0)
                count += 4;
            else
                count += i % 4;
        }
        cout << count << "\n";
    }
    return 0;
}