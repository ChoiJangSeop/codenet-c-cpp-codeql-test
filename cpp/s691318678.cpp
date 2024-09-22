#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <stdlib.h>
#include <set>
typedef long long ll;
using namespace std;

int main() {
	string s;
	cin>>s;
	for(int i=0;i<3;i++){
		if(s.substr(i,1)=="1"){
			s.replace(i,1,"9");
		}else if(s.substr(i,1)=="9"){
			s.replace(i,1,"1");
		}
	}
	cout<<s<<endl;

	return 0;
}
