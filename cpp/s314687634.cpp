#include <stdio.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <bitset>
using namespace std;
typedef long long int lli;
int main(void)
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            ans += s[i];
        }
        if (s[i] == 'B' && ans != "")
        {
            ans.erase(ans.length() - 1);
        }
    }
    cout << ans << endl;
    return 0;
}
