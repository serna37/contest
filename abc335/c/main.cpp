#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<pair<int, int>> rev(N);
    for (int i = N; i >= 1; i--) {
        rev.push_back({i, 0});
    }
    for (int i = 0; i < Q; i++) {
        int q;
        int pos;
        char dir;
        cin >> q;
        if (q == 1) {
            cin >> dir;
            int M = rev.size();
            pair<int, int> head = rev[M - 1];
            if (dir == 'R') {
                pair<int, int> n = {head.first + 1, head.second};
                rev.push_back(n);
            } else if (dir == 'L') {
                pair<int, int> n = {head.first - 1, head.second};
                rev.push_back(n);
            } else if (dir == 'U') {
                pair<int, int> n = {head.first, head.second + 1};
                rev.push_back(n);
            } else if (dir == 'D') {
                pair<int, int> n = {head.first, head.second - 1};
                rev.push_back(n);
            }
        } else {
            cin >> pos;
            int M = rev.size();
            cout << rev[M - pos].first << " " << rev[M - pos].second << endl;
        }
    }
}
