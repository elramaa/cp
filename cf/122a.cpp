// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    // Possible lucky number: 4, 7, 47, 74, 447, 474, 477, 744, 747, 777
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 ||
        n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 ||
        n % 747 == 0 || n % 777 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}