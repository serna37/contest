#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int maxVal = 0;
    rep(i, N) {
        maxVal = max(maxVal, A[i]);
    }

    int max2 = 0;
    rep(i, N) {
        if (A[i] == maxVal){
            continue;
        }
        max2 = max(max2, A[i]);
    }
    cout << max2 << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
