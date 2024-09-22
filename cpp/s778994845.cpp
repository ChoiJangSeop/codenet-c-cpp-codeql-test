#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.push(a);
    }
    
    for (int i = 0; i < n; i++) {
        cout << s.front() << " ";
        s.pop();
    }
    
    return 0;
}
