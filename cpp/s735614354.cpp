#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
using ll = long long;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((int)(x).size())
#define MSG(a) cout << #a << " " << a << endl;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    REP(i, N)
    {
        cin >> v[i];
    }

    REP(i, N)
    {
        int tmp = v[i];
        v[i] = *min_element(ALL(v));
        cout << *max_element(ALL(v)) << endl;
        v[i] = tmp;
    }

    return 0;
}
