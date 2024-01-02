#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    ll B;
    cin >> B;

    for (ll i = 1; i <= 16; ++i) {
        if (powl(i, i) == B) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    // cout << fixed << setprecision(5);

    return 0;
}
