#include <bits/stdc++.h>
using namespace std;

string s;
int a[] = {9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

int main() {
  	cin >> s;
    cout << a[s[2] - '0'] << a[s[1] - '0'] << a[s[0] - '0'] << '\n';
  	return 0; 
}