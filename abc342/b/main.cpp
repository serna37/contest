#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    int Q;
    cin >> Q;
    while (Q--) {
        int A, B;
        cin >> A >> B;
        int a = 0, b = 0;
        for (int i = 0; i < N; i++) {
            if (P[i] == A) {
                a = i;
            }
            if (P[i] == B) {
                b = i;
            }
        }
        if (a > b) {
            cout << B << endl;
        } else {
            cout << A << endl;
        }
    }
}
