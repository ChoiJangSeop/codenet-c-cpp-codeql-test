#include <bits/stdc++.h>   
using namespace std;   
typedef long long ll;  

deque<char> d;

int main()  
{   
    cin.tie(0); ios::sync_with_stdio(false);  
	freopen("input.txt", "rt", stdin);
	string str; cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != 'B')
			d.push_back(str[i]);
		else if (str[i] == 'B' && !d.empty())
			d.pop_back(); 
	}
	while (!d.empty()) {
		cout << d.front();
		d.pop_front();
	}
	cout << endl;


	return 0;   
}  