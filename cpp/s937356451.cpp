#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <string>

typedef  long long ll;

using namespace std;

int main()
{
    string s; cin >> s;
    string ans;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            if(!ans.empty()){//文字列が空でないなら
                ans.pop_back();
            }
        }else{
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}