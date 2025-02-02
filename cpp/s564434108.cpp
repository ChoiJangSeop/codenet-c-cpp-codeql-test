#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <cmath>

static const int MOD = 1000000007;
using ll = long long;
using u32 = uint32_t;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    int a,b,x,y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    printf("%lf %d\n",double(a)*double(b) / 2, x+x == a && y +y==b);
    return 0;
}