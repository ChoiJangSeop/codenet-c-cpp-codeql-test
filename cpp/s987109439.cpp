#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <set>
#include <map>
#include <bitset>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using itn = int;
const ll MOD = 1000000007;
const ll INF = MOD * MOD;

int main() {

    int n;
    cin >> n;

    int ma1 = 0;
    int ma2 = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (ma1 < a[i]) ma1 = a[i];
        if (ma2 < a[i])
            if (ma1 >= a[i]) ma2 = a[i];
    }

    int tmp = 0;

    for (int i = 0; i < n; i++) {
        tmp = 0;
        if(a[i] != ma1) cout << ma1 << endl;
        else cout << ma2 << endl;
    }
    
    return 0;


    
    

}