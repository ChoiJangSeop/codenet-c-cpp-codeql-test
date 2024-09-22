#include <bits/stdc++.h>

#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
	char n[11];
	vector<string> str;
	scanf("%s",n);
	
	for(unsigned int i = 0; i< strlen(n);i++){
		if(n[i] =='1'){
			str.push_back("1");
		}else if(n[i] == '0'){
			str.push_back("0");
		}else if(n[i] =='B' && str.size() != (unsigned int)0){
			str.pop_back();
			}
					
	}
	
	for(unsigned int index = 0; index  < str.size() ;index++){
			cout << str[index];
	}
		
	return 0;
}
