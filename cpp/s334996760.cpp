#include <iostream>
#include <stack>

using namespace std;

int main() {
string s;
string st;
cin >> s;
for (auto i = s.begin(); i != s.end(); i++) {
if (*i=='B') {
if (st.size()!=0) st.pop_back();
}
else st.push_back(*i);
}
cout << st << endl;
return 0;
}