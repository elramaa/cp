#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        int anna, katie;
        cin >> a >> b >> c;
        anna = a + ceil((float)c / 2);
        katie = b + ((float)c / 2);
        if (anna > katie) {
            cout << "First";
        } else {
            cout << "Second";
        }
        cout << "\n";
    }
    return 0;
}