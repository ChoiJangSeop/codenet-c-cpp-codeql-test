#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int sum = a + b;
        int res = 1;
        while (sum >= 10) {
            res ++;
            sum /= 10;
        }
        cout << res << endl;
    }
    return 0;
}