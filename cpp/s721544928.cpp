#include "bits/stdc++.h"

/************* Using *************/
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using graph_t = vector<vector<ll>>;

/*********** Constants ***********/
const auto INF  = static_cast<int>(1e10);
const auto INFL = static_cast<ll>(1e18);
const auto MOD  = static_cast<ll>(1e9 + 7);
const auto NIL  = nullptr;

/*********** Variables ***********/
ll N, MAX, NEXT;
vector<ll> A;
bool flag;

/************* Utils *************/

/*********** Functions ***********/
bool init() {
    cin >> N;
    A.resize(N);
    for (auto& item : A) cin >> item;
    return true;
}

void solve() {
    MAX = *max_element(A.begin(), A.end());
    flag = false;
    if (count(A.begin(), A.end(), MAX) > 1) {
        flag = true;
    }
    else {
        auto B = A;
        sort(B.begin(), B.end());
        NEXT = B[1];
    }
}

void output() {
    if (flag) {
        for (const auto& item : A) {
            cout << MAX << endl;
        }
    }
    else {
        for (const auto& item : A) {
            if (item != MAX) {
                cout << MAX << endl;
            }
            else {
                cout << NEXT << endl;
            }
        }
    }
}

int main() {
    init();
    solve();
    output();
    return 0;
}
