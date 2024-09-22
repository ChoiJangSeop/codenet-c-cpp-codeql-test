#include <bits/stdc++.h>
using namespace std;
 
int main(){
  	int n;
  	cin >> n;
    cout << (10-n/100)*100+(100-(n-n/100*100)/10*10)+10-n%10;
}
