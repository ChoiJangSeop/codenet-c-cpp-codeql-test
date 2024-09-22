#include <iostream>
using namespace std;

int main(){
    int n,m,x;
    cin>>n>>m;
    if (n<m){
        int c;
        c=m;
        m=n;
        n=c;
    }
    while(n%m != 0){
        x = n%m;
        n = m;
        m = x;
    }
    cout << m << endl;
}