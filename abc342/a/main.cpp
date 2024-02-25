#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int N = S.size();
    map<char, int> mp;
    for (int i = 0; i < N; i++) {
        mp[S[i]]++;
    }
    char A;
    for (auto [c, cnt] : mp) {
        if (cnt == 1) {
            A = c;
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A == S[i]) {
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
