#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int N = S.size();
    int i = 0;
    while (i < N and S[i] == 'A') {
        i++;
    }
    while (i < N and S[i] == 'B') {
        i++;
    }
    while (i < N and S[i] == 'C') {
        i++;
    }
    cout << (i == N ? "Yes" : "No") << endl;
}
