#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <queue>

using namespace std;

int main(void){
	string s;
	queue<char> q;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			q.push('0');
		}else if(s.at(i)=='1'){
			q.push('1');
		}else{
			if(!(i==0)){
				q.push(' ');
			}
		}
	}
	for(int i=q.size();i>=0;i--){
		cout << q[i];
		q.pop();
	}
	cout << endl;
	return 0;
}