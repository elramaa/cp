// https://codeforces.com/problemset/problem/1560/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    vi nums(1000);
    int last = 0;
    int i = 0;
    while (t--) {
        int k;
        cin >> k;
        while (true) {
            if (nums[k - 1] != 0) {
                cout << nums[k - 1] << "\n";
                break;
            } else {
                last++;
                if (last % 3 != 0 && last % 10 != 3) nums[i++] = last;
            }
        }
    }
    return 0;
}