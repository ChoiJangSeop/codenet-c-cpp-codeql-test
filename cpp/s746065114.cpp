#include <bits/stdc++.h>
using namespace std;

int main() {

    while(true){
    
        // 1. input end check.
        int a = -1, b = -1;
        cin >> a >> b;
        
        // 2. exit conditions.
        if(a == -1 && b == -1) break;
        
        // 3. output answer.
        int c = a + b;
        string ans = to_string(c);
        cout << ans.size() << endl;
    }
    
    return 0;
    
}
