#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    if (d + 1 > D) {
        m++;
        d = 1;
    } else {
        d++;
    }

    if (m > M) {
        m = 1;
        y++;
    }

    cout << y << " " << m << " " << d << endl;
    // cout << fixed << setprecision(5);

    return 0;
}
