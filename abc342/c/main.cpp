#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    map<char, vector<int>> mp;
    for (int i = 0; i < N; i++) {
        mp[S[i]].push_back(i);
    }
    int Q;
    cin >> Q;
    while (Q--) {
        char c, d;
        cin >> c >> d;
        if (mp[c].empty()) continue;
        if (c == d) continue;
        if (mp[c].size() > mp[d].size()) {
            swap(mp[c], mp[d]);
        }
        for (auto &&v : mp[c]) {
            mp[d].push_back(v);
        }
        mp[c].clear();
    }
    vector<char> ans(N);
    for (auto [c, st] : mp) {
        if (st.empty()) continue;
        for (auto i : st) {
            ans[i] = c;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i];
    }
    cout << endl;
}
