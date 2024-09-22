#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	string S; cin >> S;
	string A;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '0') A.push_back('0');
		else if (S[i] == '1') A.push_back('1');
		else {
			if (A.size()) A.erase(A.end()-1);
		}
	}
	cout << A << endl;
	//system("pause");
	return 0;
}
