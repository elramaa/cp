#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vi> A(n);
    for (int i = 0; i < n; ++i) {
        A[i] = {};
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            A[i].push_back(x);
        }
    }
    while (x--) {
        str op;
        cin >> op;
        if (op == "_") {
            for (int i = 0; i < n / 2; ++i) {
                for (int j = 0; j < m; ++j) {
                    int temp = A[i][j];
                    A[i][j] = A[n - 1 - i][j];
                    A[n - 1 - i][j] = temp;
                }
            }
        }
        if (op == "|") {
            for (int j = 0; j < n / 2; ++j) {
                for (int i = 0; i < m; ++i) {
                    int temp = A[i][j];
                    A[i][j] = A[i][m - j - 1];
                    A[i][m - j - 1] = temp;
                }
            }
        }
        if (op == "90") {
            int temp = n;
            n = m;
            m = temp;
            vector<vector<int>> B(n);
            for (int i = 0; i < n; ++i) {
                B[i] = {};
                for (int j = m - 1; j >= 0; --j) {
                    B[i].push_back(A[j][i]);
                }
            }
            A = B;
        }
        if (op == "180") {
            vector<vector<int>> B(n);
            for (int i = 0; i < n; ++i) {
                B[i] = {};
                for (int j = m - 1; j >= 0; --j) {
                    B[i].push_back(A[n - 1 - i][j]);
                }
            }
            A = B;
        }
        if (op == "270") {
            int temp = n;
            n = m;
            m = temp;
            vector<vector<int>> B(n);
            for (int i = 0; i < n; ++i) {
                B[i] = {};
                for (int j = 0; j < m; ++j) {
                    B[i].push_back(A[j][n - 1 - i]);
                }
            }
            A = B;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
