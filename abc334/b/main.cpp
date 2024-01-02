#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    ll A, M, L, R;
    cin >> A >> M >> L >> R;

    if (L == R) {
        if (A == L) {
            cout << "1" << endl;
            return 0;
        } else if (abs(A - L) % M == 0) {
            cout << "1" << endl;
            return 0;
        } else {
            cout << "0" << endl;
            return 0;
        }
    } else if (R < A) {
        ll ans = abs(A - L) / M - abs(R - A) / M;
        ans = abs(ans);
        if (abs(M - A) % M == 0) {
            ans++;
        }
        cout << ans << endl;
        return 0;
    } else if (A < L) {
        ll ans = abs(R - A) / M - abs(L - A) / M;
        ans = abs(ans);
        if (abs(L - A) % M == 0) {
            ans++;
        }
        cout << ans << endl;
        return 0;
    } else if (A == L) {
        cout << (abs((R - L) / M) + 1) << endl;
        return 0;
    } else if (A == R) {
        cout << (abs((R - L) / M) + 1) << endl;
        return 0;
    } else {
        ll ans = abs(A - L) / M + abs(R - A) / M + 1;
        cout << ans << endl;
    }

    // cout << fixed << setprecision(5);

    return 0;
}
