#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;

    // max, clean;
    pair<int, int> muzi = make_pair(M, M);
    pair<int, int> logo = make_pair(0, 0);

    rep(i, N) {
        char c = S[i];
        if (c == '0') {
            muzi = make_pair(M, M);
            logo = make_pair(logo.first, logo.first);
        }
        if (c == '1') {
            if (muzi.second > 0) {
                muzi.second--;
                continue;
            } else if (muzi.second == 0) {
                if (logo.second > 0) {
                    logo.second--;
                } else {
                    logo.first++;
                }
            }
        }
        if (c == '2') {
            if (logo.second > 0) {
                logo.second--;
                continue;
            } else {
                logo.first++;
            }
        }
    }

    cout << logo.first << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
