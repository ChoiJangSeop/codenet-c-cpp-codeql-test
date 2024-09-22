#include<iostream>
#include<string>
using namespace std;

int main(){
    int i, len;
    string n, result;
    cin >> n;
    len = n.length();
    for(i=0; i < len; i++){
        cout << n[i] << endl;
        if(n[i] == '0' or '1'){
            result += n[i];
        } else {
            if(result.length() == 0){
                continue;
            }else(result = result.substr(0, result.size()));
        }
    }
    cout << result;
}