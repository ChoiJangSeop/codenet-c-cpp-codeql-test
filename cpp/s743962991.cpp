#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
     }

    sort(b.begin(), b.end());

    for (size_t i = 0; i < n; i++)
    {
        if(a[i]==b[n-1]){
            cout << b[n-2] << endl; 
        }else{
            cout << b[n-1] << endl; 
        }
    }
    return 0;
}