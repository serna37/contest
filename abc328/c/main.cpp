#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<pair<int, int>> lr;
    rep(i, Q) {
        int l, r;
        cin >> l >> r;
        lr.push_back({l, r});
    }

    // memo
    vector<int> memo(N, 0);
    for (int i = 1; i < N; ++i) {
        bool chk = S[i - 1] == S[i];
        memo[i] = memo[i - 1] + (chk ? 1 : 0);
    }

    rep(i, Q) {
        pair<int, int> p = lr[i];
        int c = memo[p.second - 1] - memo[p.first - 1];
        cout << c << endl;
    }

    // cout << fixed << setprecision(5);

    return 0;
}
