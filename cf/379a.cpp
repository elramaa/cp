// https://codeforces.com/problemset/problem/379/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    float a, b;
    cin >> a >> b;
    // use sum of infinite geometric series formula, but minus it with one
    // idk why is this work with the -1
    cout << ceil(a / ((b - 1) / b) - 1);
    return 0;
}