#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()	{
  	string s;
  	cin >> s;
  	for (int i = 0; s[i] != '\0'; i++)	{
    	if (s[i] == '1' || s[i] == '0')
          	continue;
     	else if (s[i] == 'B' && i > 0)	{
        	s.erase(i - 1, 1);
          	i--;
        }
    }
  	for (auto x : s)	{
      if (x == 'B')
        	continue;
      else
        	cout << x;
    }
  	cout << endl;
  	return 0;
}