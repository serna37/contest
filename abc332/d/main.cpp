#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H+1, vector<ll>(W+1));
    vector<vector<ll>> B(H+1, vector<ll>(W+1));
    rep1(i, H) {
        rep1(i2, W) {
            cin >> A[i][i2];
        }
    }
    rep1(i, H) {
        rep1(i2, W) {
            cin >> B[i][i2];
        }
    }

    set<int> uniA;
    set<int> uniB;
    rep1(i, H) {
        rep1(i2, W) {
            uniA.insert(A[i][i2]);
        }
    }
    rep1(i, H) {
        rep1(i2, W) {
            uniB.insert(B[i][i2]);
        }
    }

    int si = max(uniA.size(), uniB.size());
    rep(i, si) {
    }

    // cout << fixed << setprecision(5);

    return 0;
}
