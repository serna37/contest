#include <bits/stdc++.h>
using namespace std;
int main() {
    int mx = 2e5;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int z = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            z++;
        }
    }
    long long ans = 0;
    ans += (long long)(N - z) * z;
    ans += (long long)z * (z - 1) / 2;
    vector<int> B(mx + 1);
    for (int i = 1; i <= mx; i++) {
        B[i] = i;
    }
    for (int i = 2; i * i <= mx; i++) {
        int sq = i * i;
        for (int j = sq; j <= mx; j += sq) {
            while (B[j] % sq == 0) {
                B[j] /= sq;
            }
        }
    }
    map<int, int> mp;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            continue;
        }
        mp[B[A[i]]]++;
    }
    for (auto [n, cnt] : mp) {
        ans += (long long)cnt * (cnt - 1) / 2;
    }
    cout << ans << endl;
}
