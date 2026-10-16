// https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    int prev_house = 1;
    ll time = 0;
    while (m--) {
        int a;
        cin >> a;
        if (a >= prev_house) {
            time += a - prev_house;
            prev_house = a;
        } else {
            time += n - prev_house;
            time += a;
            prev_house = a;
        }
    }
    cout << time;
    return 0;
}