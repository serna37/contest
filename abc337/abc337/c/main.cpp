#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    map<int, int> mp;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        mp[A] = i + 1;
    }
    int tmp = -1;
    vector<int> ans;
    for (int i = 0; i < N; i++) {
        ans.push_back(mp[tmp]);
        tmp = mp[tmp];
    }
    for (int i = 0; i < N; i++) {
        if (i) {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
}
