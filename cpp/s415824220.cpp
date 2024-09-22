#include <iostream>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x < y) { 
        int temp = x;
        x = y;
        y = temp;
    }
    int G = y;
    while(G != 1){
        int reminder = x % y;
        x = y;
        y = reminder;
        if(y == 0){
            G = x;
            break;
        }
        G = y;
    }
    cout << G << endl;
    return 0;
}
