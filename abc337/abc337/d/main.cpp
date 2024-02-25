#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }
    int ans = INF;
    for (int i = 0; i < H; i++) {
        int cur = 0;
        for (int j = 0; j < W; j++) {
            while (cur < W and S[i][j] != 'x') {
                cur++;
                if (cur - j == K) {
                    break;
                }
            }
            if (cur - j == K) {
                string k = S[i].substr(j, cur);
                int cnt = count(k.begin(), k.end(), '.');
                ans = min(ans, cnt);
            }
        }
    }
    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}
