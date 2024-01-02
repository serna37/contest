#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    vector<int> memo(26, 0);
    int offset = 0;
    while (offset < N) {
        int idx = offset + 1;
        while (idx < N and S[idx] == S[offset]) {
            ++idx;
        }
        int c = S[offset] - 'a';
        memo[c] = max(memo[c], idx - offset);
        offset = idx;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += memo[i];
    }
    cout << sum << endl;
}
