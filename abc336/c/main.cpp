#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin >> N;
    if (N == 1) {
        cout << 0 << endl;
        return 0;
    }
    N--;
    string ans = "";
    while (N > 0) {
        ans += to_string(N % 5 * 2);
        N /= 5;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
