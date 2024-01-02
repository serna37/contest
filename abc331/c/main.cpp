#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    vector<ll> cnt(1000000 + 5, 0);
    ll sum = 0;
    rep(i, N) {
        ll a = A[i];
        sum += a;
        cnt[a]++;
    }

    vector<ll> sumarr(1000000 + 5, 0);
    for (ll i = 1; i <= 1000000 + 3; ++i) {
        sumarr[i] = sumarr[i - 1] + i * cnt[i];
    }

    rep(i, N) {
        if (i) {
            cout << " ";
        }
        cout << sum - sumarr[A[i]];
    }

    cout << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
