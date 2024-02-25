#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    map<char, int> mp;
    for (int i = 0; i < (int)S.size(); i++) {
        mp[S[i]]++;
    }
    char c;
    int cnt = 0;
    for (auto &v : mp) {
        if (cnt < v.second) {
            c = v.first;
            cnt = v.second;
        }
    }
    cout << c << endl;
}
