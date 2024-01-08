#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<vector<int>> Dragon(N, vector<int>(N));
    int col = 0, row = 0;
    int len = N - 1;
    for (int i = 1; i <= N; i++) {
        row = 0;
        col = i - 1;
        Dragon[row][col] = i;
    }
    int n = N + 1;
    while (true) {
        if (n == N * N - 1) {
            break;
        }
        if (len % 2 == 0) {
            for (int ii = 0; ii < len; ii++) {
                row++;
                Dragon[row][col] = n;
                n++;
            }
            for (int ii = 0; ii < len; ii++) {
                col--;
                Dragon[row][col] = n;
                n++;
            }
            len--;
        } else {
            for (int ii = 0; ii < len; ii++) {
                row--;
                Dragon[row][col] = n;
                n++;
            }
            for (int ii = 0; ii < len; ii++) {
                col++;
                Dragon[row][col] = n;
                n++;
            }
            len--;
        }
    }
    row--;
    Dragon[row][col] = n;
    for (int i = 0; i < N; i++) {
        for (int ii = 0; ii < N; ii++) {
            if (ii) {
                cout << " ";
            }
            int a = Dragon[i][ii];
            if (a == 0) {
                cout << "T";
            } else {
                cout << a;
            }
        }
        cout << endl;
    }
}
