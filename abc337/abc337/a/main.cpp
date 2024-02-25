#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }
    int x = 0, y = 0;
    for (int i = 0; i < N; i++) {
        x += X[i];
        y += Y[i];
    }
    if (x > y) {
        cout << "Takahashi" << endl;
    } else if (x < y) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
}
