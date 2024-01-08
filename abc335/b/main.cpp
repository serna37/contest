#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int x = 0; x <= 21; x++) {
        for (int y = 0; y <= 21; y++) {
            for (int z = 0; z <= 21; z++) {
                if (x + y + z <= N) {
                    cout << x << " " << y << " " << z << endl;
                }
            }
        }
    }
}
