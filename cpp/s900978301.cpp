//ABC043B
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <math.h>
#include <stdio.h>
#include <climits>
#include <cfloat>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
	string s;
	cin >> s;
	string ans = "";
	for(int i=0;i<s.size();i++){
		if(s.at(i) == 'B'){
			if(ans.size() != 0){
				ans.erase(ans.end()-1);
			}
		}else{
			char c = s.at(i);
			ans += s.at(i);
		}
	}
	cout << ans << endl;
	return 0;
}