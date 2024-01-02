#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N;
    int L;
    cin >> N;
    cin >> L;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int c=0;
    rep(i, N) {
        if (A[i] >= L) {
            c++;
        }
    }
    cout << c << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
