#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	for (int a, b; cin >> a >> b;) {
		s=to_string(a + b);
		cout << s.size() << endl;
	}
	return 0;
}