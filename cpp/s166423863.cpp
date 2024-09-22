#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main()
{

    int n=0;
    cin >> n;
    // string s = to_string(n);
    string ans = "";
    for(int i = 0 ; i <=2; i++)
    {
        int keta = n % 10;
        if(keta == 1)
        {
            ans = "9" + ans;
        }
        else if (keta == 9)
        {
            ans = "1" + ans;
        }
        else{
            ans = to_string(keta) + ans;
        }
        n = n / 10;
    }


    // for(int i = 0; i < s.length(); i++)
    // {
    //     cout << s[i] << endl;
    //     if(s[i] == '1')
    //     {
    //         cout << "1dayo" << endl;
    //         s[i] = '5';
    //     }
    //     if (s[i] == '9')
    //     {
    //         // cout << "9dayo" << endl;
    //         s[i] = '1';
    //     }
    // }

    cout << ans << endl;
    return 0;
}