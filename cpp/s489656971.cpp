#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >>a[i];
    for(int i = n; i > 0; --i,cout << " ")
        cout << a[i - 1];
    cout << endl;
    return EXIT_SUCCESS;
}