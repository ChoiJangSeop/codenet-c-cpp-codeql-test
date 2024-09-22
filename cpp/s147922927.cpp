#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
#include <fstream>
#include <functional>

using namespace std;
using ll = long long;

#define all(x) (x).begin(),(x).end()
#define PRI(n) cout << n << " "<<endl;
#define PRI2(n, m) cout << n << " " << m << " "<<endl;

#define REP(i, n)  for(int i = 0; i < (int)n; ++i)
#define FOR(i, t, n)  for(int i = t; i <= (int)n; ++i)

const char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                           's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
const ll MOD = 1e9 + 7;

struct edge;
struct UnionFind;

bool isPrime(ll x);

ll GCD(ll a, ll b);

ll LCM(ll a, ll b);

ll nCr(int n, int r);


struct UnionFind {
    vector<int> par;
    vector<int> rank;

    UnionFind(int N) {
        for (int i = 0; i < N; ++i) {
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x) {
        if (par[x] == x)return x;
        else return par[x] = find(par[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y)return;
        if (rank[x] < rank[y])par[x] = y;
        else {
            par[y] = x;
            if (rank[x] == rank[y])rank[x]++;
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

ll M, N;

int main() {
    ll H, W, x, y;
    cin >> H >> W >> x >> y;
    int ans = 0;
    if (x == 0 || y == 0)ans = 0;
    else if (x * 2 == H && y * 2 == W)ans = 1;
    printf("%10f %d", double(H) * double(W) / 2, ans);
    return 0;
}

struct edge {
    int to, cost;
    bool flag = false;
};

bool isPrime(ll x) {
    if (x == 0)return 0;
    if (x == 1)return 0;
    if (x == 2)return 1;
    if (x % 2 == 0)return 0;
    FOR(i, 3, x - 1) {
        if (x % i == 0)return 0;
    }
    return 1;
}

ll GCD(ll a, ll b) {
    if (b == 0)return a;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b) {
    ll gcd = GCD(a, b);
    return a / gcd * b;
}

ll nCr(int n, int r) {
    vector<ll> C(r + 1);
    C[0] = 1;
    FOR(i, 1, n) for (int j = min(i, r); j < 1; --j)C[j] = (C[j] + C[j - 1]) % MOD;
    return C[r];
}
