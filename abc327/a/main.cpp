#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N;
    string S;
    cin >> N >> S;

    if (S.find("ab") == string::npos and S.find("ba") == string::npos) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    // cout << fixed << setprecision(5);

    return 0;
}
