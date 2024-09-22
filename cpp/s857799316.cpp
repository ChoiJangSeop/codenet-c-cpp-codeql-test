#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <iomanip>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)
const long long MOD = 1000000007LL;
const string alpha = "abcdefghijklmnopqrstuvwxyz";
int main(){
    long double w,h,x,y;
    cin >> w >> h >> x >> y;
    cout << setprecision(30) << w*h/2 << " ";
    if (2*x==w || 2*y==h){
        if(w*y == h*x){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    else{
        if(x==0 || x == w || y == 0 || y == h){
            cout << 0 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}
