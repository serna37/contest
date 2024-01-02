#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep1(i, N) for (int i = 1; i <= (int)(N); ++i)
#define ALL(a) (a).begin(), (a).end()

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    rep(i, K) {
        cin >> A[i];
    }
    if (K == 1) {
        cout << "0" << endl;
        return 0;
    }
    if (K % 2 == 0) {
        int c = 0;
        for (int i = 0; i < N; i += 2) {
            c += A[i + 1] - A[i];
        }
        cout << c << endl;
    } else {
        int idx = 0;
        vector<int>diff;
        for (int i=1; i<K; ++i) {
            diff.push_back(A[i]-A[i-1]);
        }
        int m = 0;
        int ttt = 0;
        for (int i=1; i<diff.size(); ++i) {
            int d = diff[i]-diff[i-1];
            m = max(m, d);
            if (m==d){
                ttt=i;
            }
        }
        if(ttt==1){
            diff[]
        }
        //rep(i, K) {
            //if (i == 0) {
                //int diff = A[i + 1] - A[i];
                //m = max(m, diff);
                //if (m == diff) {
                    //idx = i;
                //}
            //} else if (i == K - 1) {
                //int diff = A[i] - A[i - 1];
                //m = max(m, diff);
                //if (m == diff) {
                    //idx = i;
                //}
            //} else {
                //int diff = A[i] - A[i - 1];
                //diff += A[i + 1] - A[i];
                //m = max(m, diff);
                //if (m == diff) {
                    //idx = i;
                //}
            //}
        //}
        A.erase(A.begin() + idx);
        int c = 0;
        for (int i = 0; (int)i < A.size(); i += 2) {
            c += A[i + 1] - A[i];
        }
        cout << c << endl;
    }
    // ll N, K;
    // cin >> N >> K;
    // queue<ll> A;
    // rep(i, K) {
    // ll a;
    // cin >> a;
    // A.push(a);
    //}

    // if (K==1){
    // cout << "0" << endl;
    // return 0;
    //}

    // vector<ll> arr;
    // for (ll i = 1; i <= N; ++i) {
    // arr.push_back(i);
    // if (A.front() == i) {
    // arr.push_back(i);
    // A.pop();
    //}
    //}

    // ll c = 0;
    // for (ll i = 0; i < (ll)arr.size(); i += 2) {
    // if (arr[i] != arr[i + 1]) {
    // c++;
    //}
    //}
    // cout << c << endl;

    // cout << fixed << setprecision(5);

    return 0;
}
