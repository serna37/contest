#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    rep(i, N) cin >> D[i];

    int c = 0;
    rep(i, N) {
        int moon = i + 1;
        int mm = 0;
        if (moon < 10) {
            mm = moon;
        } else {
            if (moon / 10 == moon % 10) {
                mm = moon % 10;
            } else {
                continue;
            }
        }
        rep1(day, D[i]) {
            if (day < 10) {
                if (day == mm) {
                    c++;
                }
            } else {
                if (day / 10 == mm and day % 10 == mm) {
                    c++;
                }
            }
        }
    }

    cout << c << endl;
    // cout << fixed << setprecision(5);

    return 0;
}
