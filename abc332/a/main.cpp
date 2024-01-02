#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N,S,K;
    cin>>N>>S>>K;
    int sum=0;
    rep(i, N) {
        int P,Q;
        cin>>P>>Q;
        sum+=P*Q;
    }

    if (sum >= S) {
        cout << sum << endl;
    } else {
        cout << sum + K << endl;
    }

    // cout << fixed << setprecision(5);

    return 0;
}
