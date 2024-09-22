#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;

int N;
vector<int> A;
vector<int> A2;

int main() {
    cin >> N;
    rep(i, N) {
        int tmp; cin >> tmp;
        A.push_back(tmp);
        A2.push_back(tmp);
    }

    int max_value = 0;
    int max_count = 0;
    int second_value = 0;

    sort(A.rbegin(), A.rend());
    max_value = A[0];

    // vector<int> A2(A.size()); // ちゃんと確保しておくこと
    // copy(A.begin(), A.end(), A2.begin());

    // rep(i, N) {
    //     cout << A2[i] << endl;
    // }
    // cout << endl;

    rep(i, N) {
        if (A[0] == A[i]) {
            max_count++;
        } else if (A[0] != A[i]) {
            second_value = A[i]; 
            break;
        }
    }

    // printf("%d %d %d\n", max_value, max_count, second_value);
    rep(i, N) {
        if (max_count > 1) {
            cout << max_value << endl;
        } else {
            // max_count 1 かつ A[i] が max_value
            if (max_value == A2[i]) {
                cout << second_value << endl;
            } else {
                cout << max_value << endl;
            }
        }
    }
}