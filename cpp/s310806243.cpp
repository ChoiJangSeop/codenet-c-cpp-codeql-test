#include<iostream>

using namespace std;

int main(){
    int x,y,a,b,c;
    cin >> x >> y;
    if(x > y){
        a = x%y;
        b = y;
    }
    else if(y > x){
        a = y%x;
        b = x;
    }
    else if(x == y){
        a = x;
        b = y;
    }
    
    for(int i = 0;i<a;i++){
        c = a-i;
        if(a%c == 0){
            if(b%c == 0){
                break;
            }
        }
    }
    
    cout << c << endl;
}
