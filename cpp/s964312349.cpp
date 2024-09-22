#include <iostream>

using namespace std;

int main(){
    
    int a,b;
    cin >> a >> b;

    int temp;
    int result = 0;

    if(a >= b){
        temp = a % b;
    }else{
        temp = b % a;
    }

    for(int i=1; i<temp; i++){
        if( (a%i == 0) && (b%i == 0)) result = i;
    }

    cout << result << endl;

    return 0;
}