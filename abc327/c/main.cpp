#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    vector<vector<int>> A(9, vector<int>(9, 0));
    rep(i, 9) {
        rep(ii, 9) {
            cin >> A[i][ii];
        }
    }

    bool a = true, b = true, c = true;
    rep(row, 9) {
        set<int> rows;
        rep(col, 9) {
            rows.insert(A[row][col]);
        }
        a &= rows.size() == 9;
    }

    rep(col, 9) {
        set<int> cols;
        rep(row, 9) {
            cols.insert(A[row][col]);
        }
        b &= cols.size() == 9;
    }

    rep(i, 3) {
        rep(ii, 3) {

            set<int> test;
            rep(row, 3) {
                rep(col, 3) {
                    test.insert(A[row + i * 3][col + ii * 3]);
                }
            }
            c &= test.size() == 9;
        }
    }

    if (a and b and c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // cout << fixed << setprecision(5);

    return 0;
}
