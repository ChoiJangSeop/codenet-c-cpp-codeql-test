#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define repd(i,a,b) for (int i = (a); i < (b); i++)
typedef long long ll;
int main(void)
{
    int a, b;
    while(cin >> a >> b)
    {
        cout << (int)log10((double)(a + b)) + 1 << endl;
    }
}
