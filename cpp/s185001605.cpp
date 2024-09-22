#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s,ans = "",anss = "";
    cin >> s;
    int N = s.size();
    for(int i=0;i<N;i++){
        if(s[i] == '0') ans += '0';
        else if(s[i] == '1') ans += '1';
        else if(ans == "") continue;
        else {
            for(int j=0;j<ans.size()-1;j++){
                anss += ans.at(j);
            }
            ans = anss;
        }
    }

    cout << ans << endl;
 }