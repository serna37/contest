#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }
    vector<int> L(N + 1);
    for (int i = 0; i < N; i++) {
        L[i + 1] = min(L[i] + 1, A[i]);
    }
    vector<int> R(N + 1);
    for (int i = N - 1; i >= 0; i--) {
        R[i] = min(R[i + 1] + 1, A[i]);
    }
    int ans = 0;
    for (int i = 1; i < N; i++) {
        ans = max(ans, min(L[i], R[i - 1]));
    }
    cout << ans << endl;
}
