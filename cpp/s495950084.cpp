#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
        int x, y;
        cin >> x >> y;
        if(x < y) {
                int tmp = x;
                x = y;
                y = tmp;
        }
        int r = x % y;
        while(r != 0) {
                x = y;
                y = r;
                r = x % y;
        }
        cout << y << endl;
        return 0;
}

