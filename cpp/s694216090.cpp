#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0;i < n;i++)    cin >> a[i];

    vector<int> left(n), right(n);

    left[0] = a[0];
    for(int i = 1;i < n;i++) left[i] = max(left[i-1], a[i]);
    right[n-1] = a[n-1];
    for(int i = n-2;i > -1;i--) right[i] = max(right[i+1], a[i]);

    int m;
    for(int i = 0;i < n;i++){
        if(i > 0){
            m = left[i-1];
        }
        if(i < n-1){
            m = max(m, right[i+1]); 
        }
        cout << m << endl;
    }

    return 0;
}