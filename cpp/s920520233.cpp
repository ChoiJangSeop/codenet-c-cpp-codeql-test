#include <iostream>
#include <algorithm>
int main(){
    using namespace std;
    int x, y;
    cin >> x >> y;

    int m,n,r;
    m = max(x, y);
    n = min(x, y);
    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    cout << m << endl;
    return 0;
}
