#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <iterator>
#include <assert.h>
#pragma warning(disable:4996) 
 
typedef long long ll;
#define MIN(a, b) ((a)>(b)? (b): (a))
#define MAX(a, b) ((a)<(b)? (b): (a))
#define LINF 9223300000000000000
#define INF 2140000000
const long long MOD = 1000000007;
using namespace std;


int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);

    vector<int> a(n),b(n+1),c(n+1);
    int i;
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        b[i+1]=MAX(b[i], a[i]);
    }

    for(i=n-1; i>=0; i--) {
        c[i]=MAX(c[i+1],a[i]);
    }

    for(i=0; i<n; i++) {
        printf("%d\n", MAX(b[i], c[i+1]));
    }

    
    return 0;
}

