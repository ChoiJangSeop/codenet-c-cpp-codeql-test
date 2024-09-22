#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c=a+b,count=1;
    while (c >= 10) {
        c /= 10;
        count++;
    }
    cout << count << endl;
    return 0;
}