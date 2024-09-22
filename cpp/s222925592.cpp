#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<numeric>
#include<vector>
#include<iostream>
#include<map>

using namespace::std;

int main(void)
{

  int a,b;

  cin >> a >> b;

  int ab = a + b;

  char c_num[64];

  sprintf(c_num , "%d" , ab);
  string s_num = (string)c_num;
  cout << s_num.size() << endl;

  return 0;
}