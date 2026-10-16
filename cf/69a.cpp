// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    int sum_x, sum_y, sum_z;
    sum_x = sum_y = sum_z = 0;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}