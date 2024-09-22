#include<iostream>
using namespace std;

int main(){
    int x, y, a, b = 1;
    cin >> x >> y;
    if (x > y) {
        a = x%y;
        for (int i = 1; i <= a; i++){
            if(a%i == 0){
                if (y%i == 0) b = i;
            }
        }
    }
    else if (x < y){
        a = y%x;
        for (int i = 1; i <= a; i++){
            if(a%i == 0){
                if (x%i == 0) b = i;
            }
        }
    }
    else b = x;
    cout << b << endl;
    return 0;
}
