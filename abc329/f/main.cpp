#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    vector<set<int>> st(N);
    for (int i = 0; i < N; i++) {
        st[i].insert(C[i]);
    }
    vector<pair<int, int>> query;
    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        query.push_back({a, b});
    }
    for (int i = 0; i < Q; i++) {
        int a = query[i].first;
        int b = query[i].second;
        if (st[a].size() > st[b].size()) {
            swap(st[a], st[b]);
        }
        for (int v : st[a]) {
            st[b].insert(v);
        }
        st[a].clear();
        cout << st[b].size() << endl;
    }
}
