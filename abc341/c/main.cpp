#include <bits/stdc++.h>
using namespace std;
const vector<int> dx = {0, 1, 0, -1};
const vector<int> dy = {1, 0, -1, 0};
string di = "DRUL";
auto getd = [](char c) -> int {
    for (int i = 0; i < 4; i++) {
        if (c == di[i]) return i;
    }
    return 0;
};
auto cango = [](const char &a) -> bool {
    string white = ".";
    return white.find(a) != string::npos;
};
int main() {
    int H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;
    vector<vector<char>> G(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> G[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (G[i][j] == '#') continue;
            int y = i, x = j;
            bool ok = true;
            for (int k = 0; k < N; k++) {
                int dd = getd(T[k]);
                y += dy[dd];
                x += dx[dd];
                if (y < 0 or x < 0 or H <= y or W <= x) {
                    ok = false;
                    break;
                }
                if (!cango(G[y][x])) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans++;
        }
    }
    cout << ans << endl;
}
