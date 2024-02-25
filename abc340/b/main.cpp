#include <bits/stdc++.h>
using namespace std;
int main() {
    int Q;
    cin >> Q;
    vector<int> A;
    while (Q--) {
        int q, x;
        cin >> q >> x;
        int N = A.size();
        if (q == 1) {
            A.push_back(x);
        }
        if (q == 2) {
            cout << A[N - x] << endl;
        }
    }
}
