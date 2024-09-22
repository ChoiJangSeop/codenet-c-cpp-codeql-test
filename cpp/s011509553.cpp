#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <sstream>
 
using namespace std;
 
int main(){
    int a, b;
    stringstream s;
    while(cin >> a >> b){
    s << a + b;
    cout << s.str().size() << endl;
    }
    return 0;
}