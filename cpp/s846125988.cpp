/*
　　　  ∧＿∧　やあ
　　 （´・ω・｀)　　　　　/　　　　　ようこそ、バーボンハウスへ。
　　 ／∇y:::::＼　　　 [￣]　　　　　このテキーラはサービスだから、まず飲んで落ち着いて欲しい。
　　 |:⊃:|:::::|　　　|──|
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|　うん、「また」なんだ。済まない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|￣　  仏の顔もって言うしね、謝って許してもらおうとも思っていない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣／|
　　　　∇　∇　∇　∇　　　／.／|　　　でも、この提出を見たとき、君は、きっと言葉では言い表せない
　　　　┴　┴　┴　┴　／ ／　  |　　　「ときめき」みたいなものを感じてくれたと思う。
￣￣￣￣￣￣￣￣￣￣|／　　  |　　　殺伐としたコンテストの中で、そういう気持ちを忘れないで欲しい
￣￣￣￣￣￣￣￣￣￣　　　　 |　　　そう思って、この提出を投げたんだ。
　　　(⊆⊇)　(⊆⊇)　(⊆⊇)　　|
　    ||　　 ||　　||　　|　　　 じゃあ、判定を聞こうか。
　　.／|＼　／|＼ ／|＼
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define fst first
#define snd second
#define mp make_pair
#define ALL(obj) (obj).begin(),(obj).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i = (b-1);i>=a;i--)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n) 
#define SIZE(x) ((int)(x).size())
#define debug(x) cerr << #x << " -> " << x << " (line:" << __LINE__ << ")" << '\n';
#define debugpair(x, y) cerr << "(" << #x << ", " << #y << ") -> (" << x << ", " << y << ") (line:" << __LINE__ << ")" << '\n';
typedef long long lint;
typedef pair<int, int> pint;
typedef pair<lint, lint> plint;
typedef vector<lint> vec;
typedef vector<vector<lint>> matrix;
typedef priority_queue<lint> p_que;
typedef priority_queue<lint, vector<lint>, greater<lint>> p_que_rev;
const lint INF = INT_MAX;
const lint LINF = LLONG_MAX;
const lint MOD = 1000000000 + 7;
const double EPS = 1e-9;
const double PI = acos(-1);
const int di[]{0, -1, 0, 1, -1, -1, 1, 1};
const int dj[]{1, 0, -1, 0, 1, -1, -1, 1};

lint gcd(lint a, lint b) {
    lint r;
    while (b != 0) {
        r = a % b;
        a = b; 
        b = r;
    }
    return a;
}

lint lcm(lint a, lint b) {
    return (a / gcd(a, b)) * b;
}

lint power(lint x, lint n, lint mod = MOD) {
    lint ret = 1;
    while(n > 0) {
        if(n & 1){
            (ret *= x) %= mod;
        }
        (x *= x) %= mod;
        n >>= 1;
    }
    return ret;
}

vector<lint> make_power(int n, lint base){
    lint num = 1;
    vector<lint> ret;
    for (int i=0; i<=n; ++i){
        ret.push_back(num);
        num *= base;
    }
    return ret;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    lint w, h, x, y;
    cin >> w >> h >> x >> y;
    lint s1 = -1;
    lint s2 = -2;
    lint s3 = -3;
    lint s4 = -4;
    double a = (double)y / (double)x;
    double b = (double)h / (double)w;
    double c = (double)(-h) / (double)w;
    double d = (double)(y-h) / (double)x;
    if((x == 0 && y == 0) || (x == w && y == 0) || (x == w && y == h) || (x == 0 && y == h) || (!(2 * x == w && 2 * y == h) && (abs(a - b) < EPS || abs(c - d) < EPS))){
        double s_ = (w * h) / 2.0;
        printf("%.15f 0", s_);
        return 0;
    }
    if(!(x == 0 || x == w)){
        s1 = x * h;
        s2 = (w - x) * h;
    }
    if(!(y == 0 || y == h)){
        s3 = (h - y) * w;
        s4 = y * w;
    }
    
    //debugpair(s1, s2);
    //debugpair(s3, s4);
    lint ans = min(s1, s2);
    ans = max(ans, min(s3, s4));
    double s = (double)ans;
    printf("%.15f ", s);
    if(s1 > 0 && s2 > 0 && s3 > 0 && s4 > 0 && ((s1 <= s2 && ((s3 <= s4 && s1 == s3) || (s3 >= s4 && s1 == s4))) || (s1 >= s2 && ((s3 <= s4 && s3 == s2) || (s3 >= s4 && s2 == s4))))){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}