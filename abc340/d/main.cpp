#include <bits/stdc++.h>
using namespace std;
const long long INF = 1001001001001001001ll;
int main() {
    int N;
    cin >> N;
    vector<long long> A(N - 1), B(N - 1), X(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i] >> B[i] >> X[i];
        X[i]--;
    }
    vector<long long> dp1(N, INF);
    dp1[0] = 0;
    for (int i = 0; i < N - 1; i++) {
        dp1[i + 1] = min(dp1[i + 1], dp1[i] + A[i]);
        dp1[X[i]] = min(dp1[X[i]], dp1[i] + B[i]);
    }
    vector<tuple<int, long long, long long>> T;
    for (int i = 0; i < N - 1; i++) {
        T.push_back({X[i], A[i], B[i]});
    }
    sort(T.begin(), T.end());
    vector<long long> dp(N, INF);
    dp[0] = 0;
    for (int i = 0; i < N - 1; i++) {
        int a = get<1>(T[i]);
        int b = get<2>(T[i]);
        int x = get<0>(T[i]);
        dp[i + 1] = min(dp[i + 1], dp[i] + a);
        dp[x] = min(dp[x], dp[i] + b);
    }
    cout << min(dp1[N - 1], dp[N - 1]) << endl;
}
