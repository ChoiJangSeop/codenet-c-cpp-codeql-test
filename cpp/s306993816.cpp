#include <iostream>
#include <string>
using namespace std;
int main(void){
    // Your code here!
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        
        if(s[i] == 'B'){
            if(i!= 0){
                s[i-1] = s[i] = 'o';
              
            }
        }
        
    }
    for(int i=0;i<s.size();i++){
        if(s[i] != 'o') cout << s[i];
    }
}
