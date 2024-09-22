#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int count = 0;
    while(count != s.length()){
        count = 0;
    for(int i = 0; i < s.length(); i++){
         if(s[i] == 'B'){
            if(i == 0)
                s.erase(s.begin());
            else
                s.erase(i-1,2);
         }
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'B')
            count++;
    }
    }
    cout << s << endl;
    return 0;
}