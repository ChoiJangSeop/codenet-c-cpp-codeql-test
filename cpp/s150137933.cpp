#include<iostream>

using namespace std;

int main(void) {
    int a, b;
    while(cin >> a >> b) {
        int sum = a + b;

        int c = 1;
        while (9 < sum) {
            sum = sum / 10;
            c++;
        }

        cout << c << endl;
    }
}