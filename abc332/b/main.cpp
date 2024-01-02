#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int K, G, M;
    cin >> K >> G >> M;

    int g = 0;
    int m = 0;

    rep(i, K) {
        if (g == G) {
            g = 0;
        } else if (m == 0) {
            m = M;
        } else {
            if (G - g >= m) {
                g += m;
                m = 0;
            } else {
                m -= (G - g);
                g = G;
            }
        }
    }

    cout << g << " " << m << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
