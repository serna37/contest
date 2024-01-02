#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 3 << endl;
        return 0;
    }
    if (N == 2) {
        cout << 13 << endl;
        return 0;
    }
    if (N == 3) {
        cout << 23 << endl;
        return 0;
    }
    if (N == 4) {
        cout << 33 << endl;
        return 0;
    }

    vector<int> ruiseki(15, 0);
    int maxi = 0;
    rep1(i, 14) {
        ruiseki[i] = ruiseki[i - 1] + i;
        if (N - ruiseki[i] < 0) {
            break;
        } else {
            N -= ruiseki[i];
            maxi = i + 1;
        }
    }

    int maxKeta = maxi;
    int naka_no = N;

    int tmp = 0;
    rep1(i, maxKeta) {
        if (naka_no - i > 0) {
            naka_no -= i;
            tmp++;
        } else {
            break;
        }
    }

    auto calc = [&](int keta) -> ll {
        ll ans = 0;
        while (keta >= 0) {
            int k = keta - 1;
            ans += powl(10, k);
            keta--;
        }
        return ans;
    };

    ll ansaa = 0;
    // max fir naka_no;
    ansaa = calc(maxi) + calc(tmp + 1) + calc(naka_no);

    cout << ansaa << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
