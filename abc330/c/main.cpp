#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    ll D;
    cin >> D;
    int near = floor(sqrtl(D));

    ll minVal = D + 10;
    for (int i = near; i >= 1; --i) {
        int nowdif = floor(sqrtl(D - i * i));
        for (int l = 1; l <= nowdif; ++l) {
            ll tes = i * i + l * l;
            ll dif = abs(D - tes);
            if (minVal > dif) {
                minVal = dif;
                if (minVal == 0) {
                    break;
                }
            }
        }
        if (minVal == 0) {
            break;
        }
    }
    cout << minVal << endl;

    // ll minv=D+1;
    // int mei=0;
    // int mel=0;
    // rep1(i, near) {
    // rep1(l, near) {
    // int diff = abs(D-i*i-l*l);
    // if (minv > diff){
    // minv = diff;
    // mei=i;
    // mel=l;
    //}
    //}
    //}
    // cout << mei << endl;
    // cout << mel << endl;
    // cout << minv << endl;

    // int minVal = near + 100;
    // int ans = near;
    // rep1(i, near) {
    // ll lest = D - i * i;
    // int lest_n = floor(sqrtl(lest));
    // if (minVal > lest_n) {
    // minVal = lest_n;
    // ans = lest - lest_n * lest_n;
    //}
    //}
    // cout << near * near << endl;
    // cout << near << endl;
    // cout << lest << endl;
    // cout << lest_n << endl;
    // cout << minVal << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
