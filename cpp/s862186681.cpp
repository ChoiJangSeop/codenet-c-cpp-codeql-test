#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

long long int a, b, c;
char s;
string str1,str2;
int main() {
	cin >> str1;
	for (int k = 0; k < 3; k++) {
		printf("%c", str1[k] == '1' ? '9' : '1');
	}
	return 0;
}