#include <iostream>
using namespace std;
static const int MAX = 100;
 
int main(){
    int a[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n; i > 0; i--) {
        cout << a[i-1];
        if (i-1) cout << ' ';
        else cout << endl;
    }
    return 0;
}
