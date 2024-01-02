#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    auto func = [&](int i, int n) -> void {
        if (i) {
            cout << " ";
        }
        cout << n;
    };

    rep(i, N) {
        int w = A[i];

        if (w <= L) {
            func(i, L);
            continue;
        } else if (L < w and w < R) {
            func(i, A[i]);
            continue;
        } else if (R <= w) {
            func(i, R);
            continue;
        }

        // while (1) {
        // bool allmatchFlg = true;
        // for (int y = L; y <= R; ++y) {
        // allmatchFlg &= abs(x - w) <= abs(y - w);
        //}
        // if (allmatchFlg) {
        // if (i) {
        // cout << " ";
        //}
        // cout << x;
        // break;
        //}
        // x++;
        //}
    }
    cout << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
