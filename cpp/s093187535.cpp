#define _USE_MATH_DEFINES
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <string.h>
#include <math.h>
#include <map>

using namespace std;

int main(){
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i){
		if (s[i] == '1')
			cout << '9';
		else
			cout << '1';
	}

	cout << endl;

	return 0;
}