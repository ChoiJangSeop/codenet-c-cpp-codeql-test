#include <bits/stdc++.h>

 using namespace std;

 int main() {
   string s;
   int i, digit;

   cin >> s;

   string ans;

   digit = 0;

   ans = "XXXXXXXXXX";
   for (i = 0; i < s.length(); i++) {
     if (s.at(i) != 'B') {
       ans.at(digit) = s.at(i);
       digit++;
     }
     else {
       if (digit != 0) digit--;
     }
   }

   for (i = 0; i < digit; i++) cout << ans.at(i);

   cout << endl;
 }
