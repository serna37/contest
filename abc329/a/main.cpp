#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define repl(i, N) for (ll i = 0; i < (ll)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    string S;
    cin >> S;
    rep(i, S.size()) {
        if (i) {
            cout << " ";
        }
        cout << S[i];
    }

    // cout << fixed << setprecision(5);

    return 0;
}
