#include <iostream>
#include <vector>
using namespace std;

int main(){
    int j=0;
    string s;
    vector<char> str2;
    cin >> s;
    for(int i=0;i<s;i++){
        if(s.at(i)=='0'){
            str2.at(j)='0';
            j++;
        }
        else if(s.at(i)=='1'){
            str2.at(j)='1';
            j++;
        }
        else if(s.at(i)=='B'){
            if(i==0)continue;
            else j--;
        }
    }
    for(int i=0;i<j;i++)cout << str2.at(j);
    return 0;
}