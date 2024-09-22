#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
   
int main(void){
    int n,a[100] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
       
    cout << a[n-1];
    for(int i = n-2; i >= 0; i--){
        cout << " " << a[i];
    }
    cout << endl;
}
