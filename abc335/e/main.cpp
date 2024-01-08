#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<vector<int>> Graph(N);
    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        U--;
        V--;
        Graph[U].push_back(V);
        Graph[V].push_back(U);
    }
    stack<pair<int, set<int>>> st;
    int ans = 0;
    st.push({0, {A[0]}});
    while (!st.empty()) {
        pair<int, set<int>> now = st.top();
        st.pop();
        if (now.first == N - 1) {
            ans = max(ans, (int)now.second.size());
            continue;
        }
        for (int next : Graph[now.first]) {
            if (*--now.second.end() > A[next]) {
                continue;
            }
            set<int> nst = now.second;
            nst.insert(A[next]);
            st.push({next, nst});
        }
    }
    cout << ans << endl;
}
