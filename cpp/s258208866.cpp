#include <bits/stdc++.h>
using namespace std;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a), i##_len = (b); i < i##_len; ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define _repr(i, n) repri(i, n, 0)
/* loop in [n,m] step -1 */
#define repri(i, a, b) for(int i = int(a), i##_len = (b); i >= i##_len; --i)
/* loop in [n,0] step -1 or [n,m] step -1 */
#define repr(...) _overload3(__VA_ARGS__, repri, _repr, )(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << (x) << '\n'
typedef long long lint;
// #define int lint
const int INF = (int)(1 << 30) - 1;
int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const lint LINF = (lint)(1LL << 62) - 1;
typedef vector<int> vint;
typedef pair<int, int> pint;

struct IoSetup {
    IoSetup() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
        cerr << fixed << setprecision(20);
    }
} iosetup;

#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define SZ(x) ((int)(x).size())

/* range macro. usage: for(int i:range(n)) */
class range {
   private:
    struct I {
        int x;
        int operator*() { return x; }
        bool operator!=(I &lhs) { return x < lhs.x; }
        void operator++() { ++x; }
    };
    I i, n;

   public:
    range(int n) : i({0}), n({n}) {}
    range(int i, int n) : i({i}), n({n}) {}
    I &begin() { return i; }
    I &end() { return n; }
};

/* keep a max,min */
template <class T>
bool chmax(T &a, const T &b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}

template <class T>
bool chmin(T &a, const T &b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

/* input,output operator for pair and vector */
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &p) {
    is >> p.first >> p.second;
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    os << "[";
    for(int i = 0; i < (int)v.size(); i++) {
        os << v[i] << (i + 1 != v.size() ? ", " : "");
    }
    os << "]";
    return os;
}

template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for(T &in : v) is >> in;
    return is;
}

template <typename T, typename U>
ostream &operator<<(ostream &os, const map<T, U> &mp) {
    for(auto x = mp.begin(); x != mp.end(); ++x) {
        os << x->first << ": " << x->second
           << (x != prev(mp.end()) ? "\n" : "");
    }
    return os;
}

/* initialize vector. usage: auto v = male_v<int>(N,0); */
template <typename T>
vector<T> make_v(size_t a) {
    return vector<T>(a);
}

template <typename T, typename... Ts>
auto make_v(size_t a, Ts... ts) {
    return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}

/* fill vector. usage: fill_v(v,0); */
template <typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type fill_v(T &t, const V &v) {
    t = v;
}

template <typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type fill_v(T &t, const V &v) {
    for(auto &e : t) fill_v(e, v);
}

/* sum */
template <typename T>
T sum(vector<T> &v) {
    T ret = 0;
    for(T x : v) {
        ret += x;
    }
    return ret;
}
template <typename T>
auto sum(const T &a) {
    return a;
}
template <typename T, typename... A>
auto sum(const T &first, const A &... rest) {
    return sum(first) + sum(rest...);
}

/* mod */
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while(b) {
        long long t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if(u < 0) u += m;
    return u;
}

/* print */
template <typename T>
void print(const T &first) {
    cout << first << endl;
}
template <typename T, typename... A>
void print(const T &first, const A &... rest) {
    cout << first << " ";
    print(rest...);
}
template <typename... A>
void print(const A &... rest) {
    print(rest...);
}

/* SegmentTree */
template <typename T>
struct SegmentTree {
    using F = function<T(T, T)>;
    int n;
    F f;
    T ti;
    vector<T> dat;
    SegmentTree(){};
    SegmentTree(F f, T ti) : f(f), ti(ti) {}
    void init(int n_) {
        n = 1;
        while(n < n_) n <<= 1;
        dat.assign(n << 1, ti);
    }
    void build(const vector<T> &v) {
        int n_ = v.size();
        init(n_);
        for(int i = 0; i < n_; i++) dat[n + i] = v[i];
        for(int i = n - 1; i; i--)
            dat[i] = f(dat[(i << 1) | 0], dat[(i << 1) | 1]);
    }
    void update(int k, T x) {
        dat[k += n] = x;
        while(k >>= 1) dat[k] = f(dat[(k << 1) | 0], dat[(k << 1) | 1]);
    }
    T query(int a, int b) {
        T vl = ti, vr = ti;
        for(int l = a + n, r = b + n; l < r; l >>= 1, r >>= 1) {
            if(l & 1) vl = f(vl, dat[l++]);
            if(r & 1) vr = f(dat[--r], vr);
        }
        return f(vl, vr);
    }
    template <typename C>
    int find(int st, C &check, T &acc, int k, int l, int r) {
        if(l + 1 == r) {
            acc = f(acc, dat[k]);
            return check(acc) ? k - n : -1;
        }
        int m = (l + r) >> 1;
        if(m <= st) return find(st, check, acc, (k << 1) | 1, m, r);
        if(st <= l && !check(f(acc, dat[k]))) {
            acc = f(acc, dat[k]);
            return -1;
        }
        int vl = find(st, check, acc, (k << 1) | 0, l, m);
        if(~vl) return vl;
        return find(st, check, acc, (k << 1) | 1, m, r);
    }
    template <typename C>
    int find(int st, C &check) {
        T acc = ti;
        return find(st, check, acc, 1, 0, n);
    }
    T operator[](const int &k) const { return dat[k + n]; }
};

signed main() {
    int N;
    cin >> N;
    auto f = [&](int a, int b) { return max(a, b); };
    SegmentTree<int> seg(f, -1000000000);
    vint A(N);
    cin >> A;
    seg.build(A);
    for(int i = 0; i < N; ++i) {
        cout << max(seg.query(0, i), seg.query(i + 1, N + 1)) << endl;
    }
    return 0;
}