#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, k;
    cin >> n >> k;
    int timeleft = 4 * 60;
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (timeleft - 5 * i < k) break;
        count++;
        timeleft -= 5 * i;
    }
    cout << count;
    return 0;
}