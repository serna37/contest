#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int minv = 1e9;
    rep(i, 20) {
        rep(i2, 20) {
            rep(i3, 20) {
                int cc = i * 6 + i2 * 8 + i3 * 12;
                if (N <= cc) {
                    int cost = i * S + i2 * M + i3 * L;
                    minv = min(minv, cost);
                }
            }
        }
    }

    cout << minv << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
