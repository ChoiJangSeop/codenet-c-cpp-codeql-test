#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <map>

using namespace std;    
typedef long long ll;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const bool DEBAG = true;

int main(){

    ll H, W, a, b;
    cin >> H >> W >> a >> b;


    //縦むきの直線でやる
    long double area = H * W / 2;
    if(H / 2 == b && H % 2 == 0 && W / 2 == a && W % 2 == 0){
        cout << area << " " << 1 << endl;
    }
    else{
        cout << area << " " << 0 << endl;
    }

}