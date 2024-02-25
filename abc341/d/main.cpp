#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N, M, K;
    cin >> N >> M >> K;
    long long dup = lcm(N, M);
    auto test = [&](long long x) -> bool {
        return (x / N + x / M - (x / dup) * 2) >= K;
    };
    long long L = 0, R = 1;
    while (!test(R)) R *= 2;
    while (R - L > 1) (test(L + (R - L) / 2) ? R : L) = L + (R - L) / 2;
    cout << R << endl;
}
