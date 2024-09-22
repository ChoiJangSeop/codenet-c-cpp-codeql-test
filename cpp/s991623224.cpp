#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    while(s[0] == 'B'){
        s.erase(0, 1);
    }
    while(s[1] == 'B'){
        s.erase(0, 2);
    }
    int leng = s.length();
    while(s.find("B") != string::npos){
        for(int i = 0;i < leng;i++){
            if(s[i] == 'B'){
                s.erase(i-2, 2);
                break;
            }
            else{
                continue;
            }
        }
    }
    cout << s;    
}
    