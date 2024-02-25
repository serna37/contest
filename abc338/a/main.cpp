#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    auto func = [&](char a) -> bool {
        if ('a' <= a and a <= 'z') {
            return true;
        }
        return false;
    };
    if (func(s[0])) {
        cout << "No" << endl;
        return 0;
    }
    int N = s.size();
    if (N == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    bool alma = true;
    for (int i = 1; i < (int)s.size(); i++) {
        alma &= func(s[i]);
    }
    cout << (alma ? "Yes" : "No") << endl;
}
