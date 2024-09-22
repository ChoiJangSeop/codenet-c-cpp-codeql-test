#include <iostream>

using namespace std;

int main(){
	char s[11];
	char c[100];
	int i = 0;
	int j = 0;
	
	cin >> c;
	while(c[j] != '\0'){
		if(c[j] == '1'){
			if(i < 10){
				s[i++] = '1';
				s[i] = '\0';
			}
		}
		else if(c[j] == '0'){
			if(i < 10){
				s[i++] = '0';
				s[i] = '\0';
			}
		}
		else if(c[j] == 'B'){
			if(i > 0){
				s[i--] = '\0';	
			} 	
		}
		j++;
	}
	cout << s << endl;
	
	return 0;
}