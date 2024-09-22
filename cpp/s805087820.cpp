#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
using namespace std;


int main(){
    int n;
    int m = 0;
    cin >> n;
    if(n/100 == 1) m += 900;
    else m += 100;
    if((n-100*(n/100))/10 == 1) m += 90;
    else m += 10;
    if(n%10 == 1) m += 9;
    else m += 1;

    cout << m << endl;
	
	
	return 0;
}
