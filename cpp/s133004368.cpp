#include<iostream>
using namespace std;
int main()
{
    int n, w[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for (int i = n; i > 1; i--)
    {
        cout << w[i]<<' ';
    }
    cout << w[1] << endl;
    return 0;
}