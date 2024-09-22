#include <iostream>
using namespace std;

void s(int& a,int& b);

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    for (int i=1;i<=(n/2);i++)
        s(a[i],a[n-i+1]);
    for (int i=1;i<=n;i++)
        cout << a[i] << (i!=n?" ":"");
    cout << endl;
}

void s(int& a,int& b){
    int t;
    t=a;
    a=b;
    b=t;
}
