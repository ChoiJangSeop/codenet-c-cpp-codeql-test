#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    string n;
    cin >> n;
    replace(n.begin(), n.end(), "1", "a");
    replace(n.begin(), n.end(), "9", "z");
    replace(n.begin(), n.end(), "a", "9");
    replace(n.begin(), n.end(), "z", "1");
    cout << n;
}
