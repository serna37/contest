#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    int N;
    cin >> N;
    string a = "";
    rep(i, N) { a += to_string(N); }
    cout << a << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
