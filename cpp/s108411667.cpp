/********include********/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <complex>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <cassert>
#include <fstream>
#include <utility>
#include <functional>
#define popcount __builtin_popcount
using namespace std;

/***/
//#include <iomanip>
//#include <cmath>
#include <bits/stdc++.h>

/********define********/

#define rep(i,x) for(long long i=0;i<x;i++)
#define repn(i,x) for(long long i=1;i<=x;i++)
#define rrep(i,x) for(long long i=x-1;i>=0;i--)
#define rrepn(i,x) for(long long i=x;i>1;i--)
#define REP(i,n,x) for(long long i=n;i<x;i++)
#define REPN(i,n,x) for(long long i=n+1;i<x;i++)

#define pr printf
#define re return
#define mod 1000000007
//#define mod 998244353
#define INF 1e18+5//19桁
const double PI=3.14159265358979323846;
#define fi first
#define se second
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

typedef long long int ll;
typedef pair<long long, long long> P;


/********よく使う関数********/

// 素因数分解
vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

// 約数列挙
vector<long long> calc_divisor(long long n) {
    vector<long long> res;
    for (long long i = 1LL; i*i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            long long j = n / i;
            if (j != i) res.push_back(j);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

//最大公約数
int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }

//最大公約数 複数個
int gcd(const vector<int> &v) {
	int ret = v[0];
	for (int i = 1; i < v.size(); i++)
		ret = gcd(ret, v[i]);
	return ret;
}

//最小公倍数
int lcm(int x, int y) { return x / gcd(x, y) * y; }

//最小公倍数 複数個
int lcm(const vector<int> &v) {
	int ret = v[0];
	for (int i = 1; i < v.size(); i++)
		ret = lcm(ret, v[i]);
	return ret;
}

/********変数宣言********/
//vector<long long> g[200020];
vector<pair<long long,long long>> g[200020];
ll s[200020];
bool used[200020];
bool dp[100005];

int main()
{
	cin.tie(0);
    ios::sync_with_stdio(false);
    
    /********よく使う********/
	
    //std::sort(v.begin(),v.end());//昇順ソート
	//std::sort(v.begin(),v.end(),std::greater<long long>());//降順ソート
    //v.erase(unique(v.begin(), v.end()), v.end());
    //vector<ll> v(N, 0);
    
    //vector<pair<long long, long long> > p(N);
    //sort(p.begin(), p.end());
	//sort(p.begin(), p.end(),greater<pair<long long,long long> >());
    
    //priority_queue<long long, vector<long long>, greater<long long> > que;
    //priority_queue<long long> que;
    
    
    //deque<long long> dque;
    
    //set<ll> st;
    //stack<long long> sta;   
    //queue<long long> que;
    //s.insert(0, " ");

    /******初期化***********/
	ll A,B,C,H,K,M,N,Q,T,W,X,Y;
	double dA,dB,dC,dH,dK,dM,dN,dQ,dT,dW,dX,dY;

	long long ans,sum,cnt,cnt1,flg,flg1,flg2;
	
	long long max,max1;
	long long min,min1;
    long long wk,wk1;
    max=max1=min=min1=wk=wk1=sum=ans=cnt=cnt1=flg=flg1=flg2=0;
	double dwk,dwk1,dsum,dsum1,dans,dans1;
	dwk=dwk1=dsum=dsum1=dans=dans1=0;

	map<ll, ll, std::greater<ll>> mp;
    
	cin >> N;
	vector<ll>v(N);
	rep(i,N){
		cin >> v[i];
		mp[v[i]]++;
	}
	ll max2;
	for(auto p:mp){
		if(p.se==1 && flg==0){
			flg=1;
			max=p.fi;
		}
		else if(flg==0 && p.se>=2){
			max=p.fi;
			break;
		}
		else{
			max2=p.fi;
			break;
		}
	}
	rep(i,N){
		if(max==v[i] && flg==1){
			pr("%lld\n",max2);
		}
		else{
			pr("%lld\n",max);
		}
	}
	re 0;



	/******出力関連***********/
    //pr("%lld\n",N);
    //printf("%lld",(ll)ceil(dB/dA));
    //puts("Yes");
    //文字列の出力
    //std::cout << s << std::endl;
    //printf("%.12f\n",ret);
    //cout << sum << '\n';
	//pr("%02lld:%02lld",wk/60,wk%60);
	
    /******CF***********/
    /*
	cin >> T;
	while(T--){
		cin >> N >> K;
		std::vector<long long> v(N);	
		// 配列入力1
		/*
		for(long long i=0; i<N; i++){
			std::cin >> v[i];
		}
		*/
		//cout << sum << '\n';
		//文字列の出力
    	//std::cout << s << std::endl;
	//}
	//re 0;
    
    /******よく使う***********/
    
    //素因数分解
	/*
	auto pf = prime_factorize(v[i]);
	for(auto p:pf){
		if(p.se!=wk){		
        }
    }
	*/
	//約数列挙
	/*
	vector<long long> div = calc_divisor(M);
    
    // M の約数 d であって、d * N <= M となる最大の d を求める
    long long res = 1;
    for (auto d : div) {
        if (d * N <= M) res = max(res, d);
    }
	*/

    //最小公倍数
	/*
	std::vector<int> v(N);
	rep(i, N) {
		cin >> v[i];
	}	
	cout << lcm(v) << endl;
	return 0;
	*/

    //最小公約数
	/*
	std::vector<int> v(N);
	rep(i, N) {
		cin >> v[i];
	}	
	cout << gcd(v) << endl;
	return 0;
	*/

	//素数判定
	/*
	for(int i=x; ; i++){
		bool dame=0;
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				dame=1;
				break;
			}
		}
		if(!dame){
			cout<<i<<endl;
			return 0;
		}
	}
	*/

	//if(ceil(sqrt(wk)==floor(sqrt(wk))))
	//do{
	//}while(next_permutation(v.begin(),v.end()));

    /******出力関連***********/
    //pr("%lld\n",N);
    //printf("%lld",(ll)ceil(dB/dA));
    //puts("Yes");
    //文字列の出力
    //std::cout << s << std::endl;
    //printf("%.12f\n",ret);
    //cout << sum << '\n';
	//pr("%02lld:%02lld",wk/60,wk%60);
    

    re 0;
    
}
