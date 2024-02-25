#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < 2 * N + 1; i++) {
        if (i & 1) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
}
