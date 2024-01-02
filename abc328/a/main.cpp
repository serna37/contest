#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    int N;cin>>N;
    int X;cin>>X;
    vector<int>S(N);
    rep(i, N) {
        cin>>S[i];
    }
    int sum = 0;
    rep(i, N) {
        if (S[i] <= X){
            sum += S[i];
        }
    }

    cout << sum << endl;
    // cout << fixed << setprecision(5);

    return 0;
}
