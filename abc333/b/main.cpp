#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)

int main() {
    char S1,S2,T1,T2;
    cin>>S1>>S2>>T1>>T2;

    int s1 = S1 - 'A';
    int s2 = S2 - 'A';
    int t1 = T1 - 'A';
    int t2 = T2 - 'A';

    int s = abs(s2 - s1);
    int t = abs(t2 - t1);

    s = s == 3 ? 2 : s;
    s = s == 4 ? 1 : s;
    t = t == 3 ? 2 : t;
    t = t == 4 ? 1 : t;

    if (s == t){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    // cout << fixed << setprecision(5;

    return 0;
}
