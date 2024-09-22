#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string n;
    cin >> n;
    string ret = "";
    for(size_t i = 0; i < 3; i++)
    {
        if (n[i]=='1')
            ret += '9';
        else
            ret += '1';
    }
    cout << ret << endl;    
    
    return 0;
}